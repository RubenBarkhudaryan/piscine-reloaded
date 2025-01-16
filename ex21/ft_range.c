/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:09:58 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/13 19:22:01 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	*range;
	int	ind;

	if (min >= max)
		return (NULL);
	length = max - min;
	range = (int *)malloc(length * sizeof(int));
	if (!range)
		return (NULL);
	ind = 0;
	while (ind < length)
	{
		range[ind] = min;
		++min;
		++ind;
	}
	return (range);
}
