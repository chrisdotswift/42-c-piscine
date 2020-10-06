/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 18:12:04 by cduong            #+#    #+#             */
/*   Updated: 2020/09/29 15:21:11 by cduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
	{
		return (NULL);
	}
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
