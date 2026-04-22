/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:37:07 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/04/21 14:35:09 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}
/*
int	is_long(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len > 3)
		return (1);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char	*arr[] = {"hola", "Yo", "42", "CAT", 0};
	int	result;

	result = ft_count_if(arr, &is_long);
	printf("El valor total %d\n", result);
	return (0);
}
*/
