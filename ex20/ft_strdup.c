/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 15:38:59 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/04/17 10:29:58 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*c;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	c = malloc (sizeof(char) * (len + 1));
	if (!c)
		return (NULL);
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*text;
	char	*memori;

	text = "Hola";
	memori = ft_strdup(text);
	printf("El caracter guardado es %s\n", memori);
	free(memori);
	return (0);
}
*/
