/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolgin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 14:27:20 by avolgin           #+#    #+#             */
/*   Updated: 2017/12/30 15:58:25 by avolgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i;

	i = 1;
	 wchar_t c = 291;
//	unsigned	char b = 162;
	 while (c >>= 1)
		 i++;
	 printf ("i = %d\n", i); 
//	write (1, &b, 1);
	return (0);
}