/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:30:12 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/04/15 12:03:27 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb < 0 || nb > 2147483647)
		return (0);
	if (nb == 1)
		return (1);
	while (nb / i >= i)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	num;
	int	result;

	num = 47000;
	result = ft_sqrt(num);
	printf("El numero es %d\n", result);
	return (0);
}
*/
