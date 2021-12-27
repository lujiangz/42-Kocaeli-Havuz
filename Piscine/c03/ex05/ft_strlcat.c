/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msevuk <msevuk@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:32:35 by msevuk            #+#    #+#             */
/*   Updated: 2021/12/09 17:32:39 by msevuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_uzunluk;
	unsigned int	src_uzunluk;

	i = ft_strlen(dest);
	j = 0;
	dest_uzunluk = ft_strlen(dest);
	src_uzunluk = ft_strlen(src);
	if (size < 1)
		return (src_uzunluk + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_uzunluk)
		return (src_uzunluk + size);
	else
		return (dest_uzunluk + src_uzunluk);
}
