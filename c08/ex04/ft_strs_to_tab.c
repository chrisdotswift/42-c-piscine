/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 16:22:32 by tduong            #+#    #+#             */
/*   Updated: 2020/09/30 18:11:05 by tduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	dest = NULL;
	i = 0;
	len = ft_strlen(src);
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*par;

	i = 0;
	if (!(par = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		par[i].size = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		i++;
	}
	par[i].size = 0;
	par[i].str = 0;
	par[i].copy = 0;
	return (par);
}
