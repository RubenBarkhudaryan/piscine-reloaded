/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:05:30 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/16 20:10:13 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int	main(int arg_c, char **arg_v)
{
	int	fd;

	if (arg_c > 2)
		ft_putstr("Too many arguments.\n");
	else if (arg_c == 1)
		ft_putstr("File name missing.\n");
	else
	{
		fd = open(arg_v[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("Cannot read file.\n");
			return (0);
		}
		ft_display_file(fd);
		close (fd);
	}
	return (0);
}
