/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:47:12 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/13 13:54:26 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while ((sqrt * sqrt) < nb)
		++sqrt;
	if ((sqrt * sqrt) == nb)
		return (sqrt);
	return (0);
}
