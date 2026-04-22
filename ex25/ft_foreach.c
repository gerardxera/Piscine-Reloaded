/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:44:13 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/04/21 13:33:32 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int	*tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	print_int(int n)
{
	printf("Numero: %d\n", n);
}

int	main(void)
{
	int	length;
	int	num[] = {10, 20, 30, 40, 50};

	length = 5;
	ft_foreach(num, length, &print_int);
	return (0);
}
*/
