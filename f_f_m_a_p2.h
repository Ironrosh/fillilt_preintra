/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_f_m_a_p2.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 14:46:47 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 13:15:10 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_F_F_M_A_P2_H
# define FILLIT_F_F_M_A_P2_H

# include <stdlib.h>
# include <unistd.h>
# include "field.h"
# include "main_algorithm.h"

int		gen_else(t_gg *g_gg, char *str, t_gen *gen_p);
void	set_st(t_s *se_st, int g_s, t_f *figure);
void	se_pos_st_p1(t_gg *g_g, t_xy se_xy, t_f *f, char *str);
void	se_pos_st_p2(t_gg *g_g, t_f *f);
void	set_st_p0(t_m *p, int g_s, t_f *figure);

#endif
