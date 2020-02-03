/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logical.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:05:04 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 13:33:24 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "field.h"

void	set_x_max(t_f *p)
{
	p->sqrt0 = 0x0101010101010101;
	p->sqrt1 = 0;
	p->sqrt2 = 0x0101010101010101;
	p->sqrt3 = 0;
}

void	set_y_max(t_f *p)
{
	p->sqrt0 = 0x00000000000000FF;
	p->sqrt1 = 0x00000000000000FF;
	p->sqrt2 = 0;
	p->sqrt3 = 0;
}

void	logical_or(t_f *p_one, t_f *p_two)
{
	p_one->sqrt0 |= p_two->sqrt0;
	p_one->sqrt1 |= p_two->sqrt1;
	p_one->sqrt2 |= p_two->sqrt2;
	p_one->sqrt3 |= p_two->sqrt3;
}

void	copy_in_struct(t_f *p_one, t_f *p_two)
{
	p_one->sqrt0 = p_two->sqrt0;
	p_one->sqrt1 = p_two->sqrt1;
	p_one->sqrt2 = p_two->sqrt2;
	p_one->sqrt3 = p_two->sqrt3;
}

void	logical_xor(t_f *p_one, t_f *p_two)
{
	p_one->sqrt0 ^= p_two->sqrt0;
	p_one->sqrt1 ^= p_two->sqrt1;
	p_one->sqrt2 ^= p_two->sqrt2;
	p_one->sqrt3 ^= p_two->sqrt3;
}
