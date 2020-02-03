/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:14:09 by ncharlen          #+#    #+#             */
/*   Updated: 2020/02/03 15:54:14 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "field.h"
#include "figure.h"
#include "validate.h"
#include "libft.h"
#include "main_a_sup.h"
#include <fcntl.h>
#define MAX_FIG 100

int	main(int argc, char **argv)
{
	int		fd;
	int		n;
	char	ck[MAX_FIG];

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	ft_memset(ck, '\0', MAX_FIG);
	if (get_figures(ck, fd) == -1)
		throw_error();
	n = get_figure_numbers(ck);
	check_quant(n);
	generate_start(ck, n);
	close(fd);
	return (0);
}
