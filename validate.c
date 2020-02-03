/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:12:35 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 18:09:43 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate.h"
#include "figure.h"
#include "field.h"
#include "useful_f_p1.h"
#include "f_f_m_a_p4.h"
#include "libft.h"
#define BUF_SIZE 21

t_f g_figure;
uint32_t g_t_figure;
extern int g_fig;

int	get_figure_numbers(char *a)
{
	int counter;

	counter = 0;
	while (*a)
	{
		++a;
		++counter;
	}
	if (counter > 26)
		throw_error();
	return (counter);
}

int	get_figures(char *a, int fd)
{
	t_vl	val_st;

	vl_init(&val_st, fd, BUF_SIZE);
	if (val_st.buf[19] == '\n')
		val_st.buf[20] = '\n';
	while (val_st.count >= 20)
	{
		if (val_st.count == 20)
			val_st.flag = 1;
		if ((a[val_st.i] = check_figure(val_st.buf, val_st.count,\
			val_st.i)) != -1)
		{
			++val_st.i;
			val_st.count = read(fd, val_st.buf, BUF_SIZE);
		}
		else
			free_buf(val_st.buf);
	}
	if (val_st.flag == 0)
		throw_error();
	if (val_st.count != 0)
		free_buf(val_st.buf);
	free(val_st.buf);
	return (1);
}

int	check_figure(char *buf, int count, int k)
{
	int			symbols;
	int			new_string;
	int			i;

	symbols = 0;
	new_string = 0;
	i = 0;
	g_t_figure = 0;
	if (check_zero(symbols, buf) == -1)
		throw_error();
	g_t_figure = c_buf_f(symbols, new_string, i, buf);
	if ((int)(g_t_figure = set_and_check_figure(&g_figure, g_t_figure)) == -1)
		throw_error();
	if (count == 20 && k == 0)
	{
		print_one(g_fig);
		exit(0);
	}
	return (g_t_figure);
}

int	c_buf_f(int symbols, int new_string, int i, char *buf)
{
	while (*buf)
	{
		if (*buf == '.')
			++symbols;
		else if (*buf == '#')
			symbols = c_buf_f_2(symbols, i);
		else if (*buf == '\n')
		{
			if (symbols != 4)
				throw_error();
			i += 3;
			symbols = 0;
			if (++new_string == 4)
			{
				++buf;
				break ;
			}
		}
			else throw_error();
		++i;
		++buf;
	}
	if ((buf[0] != '\n' || buf[1] != '\0'))
		throw_error();
	return (g_t_figure);
}

int	c_buf_f_2(int symbols, int i)
{
	g_t_figure |= (1 << i);
	return (++symbols);
}
