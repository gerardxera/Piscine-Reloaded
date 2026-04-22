/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:48:18 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/04/22 16:25:57 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(2, str, 1);
		str++;
	}
}

int	ft_puterr(char *str)
{
	ft_putstr(str);
	return (1);
}

int	main(int argc, char *argv[])
{
	char	buffer[1024];
	int		bytes;
	int		fd;

	if (argc == 1)
		return (ft_puterr("File name missing.\n"));
	if (argc > 2)
		return (ft_puterr("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (ft_puterr("Cannot read file.\n"));
	bytes = read(fd, buffer, 1024);
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, 1024);
	}
	if (bytes < 0)
		return (ft_puterr("Cannot read file.\n"));
	close(fd);
	return (0);
}
