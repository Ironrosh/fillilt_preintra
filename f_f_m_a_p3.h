/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_f_m_a_p3.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 14:46:47 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 13:15:25 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_F_F_M_A_P3_H
# define FILLIT_F_F_M_A_P3_H

# include <stdlib.h>
# include <unistd.h>
# include "field.h"
# include "main_algorithm.h"

void	se_pos_m(t_m *p, t_f *figure);
void	se_pos_d(t_m *p);
void	set_s_p_e(t_m2 *p, int g_s, t_gg *g, t_f *figure);
void	se_pos_m2(t_m2 *p, t_f *figure);
void	se_pos_d2(t_m2 *p);

#endif
