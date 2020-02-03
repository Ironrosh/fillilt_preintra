/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_a_sup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 12:15:32 by mhorpe            #+#    #+#             */
/*   Updated: 2020/02/03 15:12:01 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "field.h"
#include "main_algorithm.h"
#include "f_f_m_a_p4.h"

extern t_gg		g_gg;
extern int		g_s;
extern int		g_counter;
extern uint16_t	*g_f_p_a;
int				g_flag = 0;

void	check_quant(int quantity)
{
	if (quantity == 9 || quantity == 22)
		g_s = ft_sqrt(M_S * quantity) + 1;
	else
		g_s = ft_sqrt(M_S * quantity);
}

int		generate_start(char *str, int quantity)
{
	t_ms		ms;
	t_ms		*q;
	char		d2garray[g_s][g_s];

	q = &ms;
	set_gen_st(q, str, quantity);
	if (g_flag == 1)
		g_s += 1;
	if (str[1])
	{
		while (*q->p && q->st->arg != 1)
		{
			set_gen_p0(q, str, &g_gg);
			++q->p;
		}
		if (set_gen_arg(q, d2garray, quantity, str))
			return (1);
	}
	return (0);
}
