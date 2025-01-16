/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:05:20 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/16 20:07:42 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

void	ft_display_file(int fd)
{
	int		size;
	char	buff[BUFF_SIZE];

	size = read(fd, buff, BUFF_SIZE);
	while (size)
	{
		write(1, buff, size);
		size = read(fd, buff, BUFF_SIZE);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		++i;
	}
}
