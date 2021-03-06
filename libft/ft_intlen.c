/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:57:18 by avolgin           #+#    #+#             */
/*   Updated: 2018/01/20 20:34:17 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_intlen(long long int nbr)
{
	size_t					i;
	unsigned long long int	a;

	if (nbr < 0 && nbr + 1 != -9223372036854775807)
		a = -nbr;
	else
		a = (nbr + 1 == -9223372036854775807) ? 9223372036854775807 + 1 : nbr;
	i = 0;
	if (a == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}
