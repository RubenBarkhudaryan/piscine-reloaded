/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:29:28 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/13 16:29:33 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*temp;

	len = ft_strlen(src);
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (src[i])
	{
		temp[i] = src[i];
		++i;
	}
	temp[i] = '\0';
	return (temp);
}
