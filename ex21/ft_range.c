/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:45:46 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/04/22 15:38:12 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*memori;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	memori = malloc(sizeof(int) * size);
	if (!memori)
		return (NULL);
	i = 0;
	while (min < max)
	{
		memori[i] = min;
		min++;
		i++;
	}
	return (memori);
}
/*
#include <stdio.h>

int	main(void)
{
	int	start;
	int	end;
	int	*result;
	int	i;

	start = 0;
	end = 5;
	result = ft_range(start, end);
	i = 0;
	while (start < end)
	{
		printf("numero %d\n", result[i]);
		i++;
		start++;
	}
	free(result);
	return (0);
}
*/
