/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:28:22 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/04/15 13:41:40 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*text;

	int		result;

	text = "Hola";
	result = ft_strlen(text);
	printf("Longitud es %d\n", result);
	return (0);
}
*/
