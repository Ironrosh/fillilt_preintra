/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_figure.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 15:35:03 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 13:17:11 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_MOVE_FIGURE_H
# define FILLIT_MOVE_FIGURE_H

# include <stdlib.h>
# include <unistd.h>
# include "field.h"

void move_right(t_f *p);
void move_left(t_f *p);
void move_up(t_f *p);
void move_down(t_f *p);

#endif
