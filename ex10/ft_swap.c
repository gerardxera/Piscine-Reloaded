/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:20:46 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/04/14 11:32:30 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	val1;
	int	val2;

	val1 = 2;
	val2 = 4;
	ft_swap(&val1, &val2);
	printf("valor1 = %d\nvalor2 = %d\n", val1, val2);
	return (0);
}
*/
