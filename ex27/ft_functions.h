/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:05:39 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/16 20:12:02 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNCTIONS_H
# define FT_FUNCTIONS_H

# include <fcntl.h>
# include <unistd.h>

# define BUFF_SIZE 1024

void	ft_display_file(int fd);
void	ft_putstr(char *str);

#endif