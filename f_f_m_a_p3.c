/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_f_m_a_p3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 14:46:41 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 13:29:37 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "field.h"
#include "main_algorithm.h"
#include "move_figure.h"
#include "logical.h"

void	se_pos_m(t_m *p, t_f *figure)
{
	t_m	*d;

	d = p;
	++d->se_xy.y;
	move_down(figure);
	copy_in_struct(&d->f_c, figure);
}

void	se_pos_d(t_m *p)
{
	t_m	*d;

	d = p;
	++d->se_xy.x;
	move_right(&p->f_c);
}

void	set_s_p_e(t_m2 *p, int g_s, t_gg *g, t_f *figure)
{
	t_gg	*g_gg;
	t_m2	*m;

	m = p;
	g_gg = g;
	m->se_xy.y = 0;
	m->s.m_x_f = count_for_max_x(figure);
	m->s.m_y_f = count_for_max_y(figure);
	m->s.m_x_b = count_for_max_x(&g_gg->g_b_f);
	m->s.m_y_b = count_for_max_y(&g_gg->g_b_f);
	m->e.max_x = ((m->s.m_x_b + m->s.m_x_f - 1) <= g_s) ?
			m->s.m_x_b : (g_s - m->s.m_x_f + 1);
	m->e.max_y = ((m->s.m_y_b + m->s.m_y_f - 1) <= g_s) ?
			m->s.m_y_b : (g_s - m->s.m_y_f + 1);
	copy_in_struct(&m->f_c, figure);
}

void	se_pos_m2(t_m2 *p, t_f *figure)
{
	t_m2	*d;

	d = p;
	++d->se_xy.y;
	move_down(figure);
	copy_in_struct(&d->f_c, figure);
}

void	se_pos_d2(t_m2 *p)
{
	t_m2	*d;

	d = p;
	++d->se_xy.x;
	move_right(&p->f_c);
}
