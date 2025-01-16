/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:06:43 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/13 19:03:20 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_is_negative(int num);
void	ft_putchar(char c);

void	ft_is_negative(int num)
{
	if (num < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
