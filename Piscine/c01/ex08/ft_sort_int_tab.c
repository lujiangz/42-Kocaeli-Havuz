/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msevuk <msevuk@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:50:33 by msevuk            #+#    #+#             */
/*   Updated: 2021/12/01 17:32:52 by msevuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	bucket;

	i = 0;
	k = 0;
	while (i < size)
	{
		while (k < size)
		{
			if (tab[k] > tab[k + 1])
			{
				bucket = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = bucket;
			}
			k++;
		}
		i++;
		k = 0;
	}
}
