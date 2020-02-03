/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 13:26:57 by mhorpe            #+#    #+#             */
/*   Updated: 2020/02/03 13:26:59 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_aprox(int nb, int total)
{
	int tmp;

	tmp = nb;
	while (tmp / total != total && tmp >= 4)
		tmp--;
	if (tmp < 4)
		total--;
	if (tmp / total != total)
		return (ft_aprox(nb, total--));
	else
		return (total);
}

int		ft_sqrt(int nb)
{
	int total;

	total = 1;
	if (nb < 0)
		return (0);
	if ((nb >= 0) && (nb < 2))
		return (nb);
	while ((total < nb / 4) && (total * total != nb))
		total++;
	if (total * total == nb)
		return (total);
	else
		return (ft_aprox(nb, total--));
}
