/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figure.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:11:50 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 18:12:24 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_FIGURE_H
# define FILLIT_FIGURE_H
# include "field.h"

uint64_t	create_tetro(int index);
int			set_and_check_figure(t_f *figure, int t_figure);
int			seek_figure(int figure);
void		set_figure(t_f *p, uint32_t tetro);
void		print_one(int fig);

#endif
