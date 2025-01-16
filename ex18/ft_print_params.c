/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:26:02 by rbarkhud          #+#    #+#             */
/*   Updated: 2025/01/13 19:05:19 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int arg_c, char *arg_v[])
{
	int	i;
	int	j;

	if (arg_c >= 2)
	{
		i = 1;
		while (i < arg_c)
		{
			j = 0;
			while (arg_v[i][j])
			{
				ft_putchar(arg_v[i][j]);
				++j;
			}
			ft_putchar('\n');
			++i;
		}
	}
	return (0);
}
