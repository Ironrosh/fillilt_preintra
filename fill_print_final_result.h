/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_print_final_result.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:12:09 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 13:22:40 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_FILL_PRINT_FINAL_RESULT_H
# define FILLIT_FILL_PRINT_FINAL_RESULT_H
# include <stdlib.h>
# include <unistd.h>

void fill_bigarray(int s_s_s, char d2a[][s_s_s]);
void print_bigarray(int s_s_s, char d2a[][s_s_s]);
void fill_f_l(int s_s_s, uint16_t *a, char d2a[][s_s_s]);
void check_array(char *a, uint16_t *for_print, int quantity);
void fill_array(char *temp_inital, char *str, int quantity);

#endif
