/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msevuk <msevuk@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:49:30 by msevuk            #+#    #+#             */
/*   Updated: 2021/12/11 15:19:04 by msevuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hata(char *base, int *hata)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*hata = 1;
	while (base[i] && *hata == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*hata = 1;
		}
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 33 || base[i] > 126)
			*hata = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		hata;
	long	res;

	i = 0;
	ft_hata(base, &hata);
	res = nbr;
	if (hata == 0)
	{
		if (res < 0)
		{
			ft_putchar('-');
			res *= -1;
		}
		while (base[i])
			i++;
		if (res < i)
			ft_putchar(base[res]);
		if (res >= i)
		{
			ft_putnbr_base(res / i, base);
			ft_putnbr_base(res % i, base);
		}
	}
}
