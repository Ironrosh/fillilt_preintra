/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:48:51 by mhorpe            #+#    #+#             */
/*   Updated: 2019/09/19 15:49:42 by mhorpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size + 1 < size)
		return (NULL);
	str = (char*)malloc(sizeof(char) * size + 1);
	if (str)
	{
		ft_memset(str, '\0', size + 1);
		return (str);
	}
	else
		return (NULL);
}
