/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:34:16 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/04/14 11:51:07 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	val1;
	int	val2;
	int	division;
	int	rest;

	val1 = 10;
	val2 = 5;
	ft_div_mod(val1, val2, &division, &rest);
	printf("Resultado Division %d\nResultado Resto %d\n", division, rest);
	return (0);
}
*/
