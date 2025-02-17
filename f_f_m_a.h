/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_f_m_a.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:03:20 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 13:15:47 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_F_F_M_A_H
# define FILLIT_F_F_M_A_H

# include <stdlib.h>
# include <unistd.h>
# include "field.h"
# include "main_algorithm.h"

void log_xor(t_f *borders, t_f *main_field, t_f figure_copy);
void move(t_f *figure, t_f figure_copy);
char *creat_temp(char *t_i, char *str, int quantity);
void gen_swap(t_gen *gen, char *str);
void gen_start_swap(char *p, char *str);

#endif
