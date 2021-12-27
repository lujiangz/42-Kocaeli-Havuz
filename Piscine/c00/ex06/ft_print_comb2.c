/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msevuk <msevuk@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:10:21 by msevuk            #+#    #+#             */
/*   Updated: 2021/11/28 02:36:45 by msevuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < 100)
	{
		k = i + 1;
		while (k < 100)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			ft_putchar(' ');
			ft_putchar(k / 10 + 48);
			ft_putchar(k % 10 + 48);
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			k++;
		}
		i++;
	}
}
