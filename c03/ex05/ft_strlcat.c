/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:31:34 by cduong            #+#    #+#             */
/*   Updated: 2020/09/21 15:12:17 by cduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	if (size <= i)
		j = j + size;
	else
		j = j + i;
	k = 0;
	while (src[k] && (i + 1) < size)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (j);
}
