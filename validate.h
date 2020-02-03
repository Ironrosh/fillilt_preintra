/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:11:05 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 15:58:06 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_VALIDATE_H
# define FILLIT_VALIDATE_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_vl
{
	int		count;
	char	*buf;
	int		i;
	int		flag;
}				t_vl;
int				get_figure_numbers(char *a);
int				get_figures(char *a, int fd);
int				check_figure(char *buf, int count, int k);
int				c_buf_f(int symbols, int new_string, int i, char *buf);
int				c_buf_f_2 (int symbols, int i);
void			throw_error(void);

#endif
