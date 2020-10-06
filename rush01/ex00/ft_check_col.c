/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_col.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 20:45:56 by asanson           #+#    #+#             */
/*   Updated: 2020/09/21 17:09:50 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_col1(int tab[][4], int obs[][4], int x)
{
	int count;
	int i;
	int highvalue;

	count = 0;
	i = 0;
	highvalue = 0;
	while (i < 4)
	{
		if (tab[i][x] > highvalue)
		{
			highvalue = tab[i][x];
			count++;
		}
		i++;
	}
	if (count != obs[0][x])
		return (0);
	return (1);
}

int		ft_check_col2(int tab[][4], int obs[][4], int x)
{
	int count;
	int i;
	int highvalue;

	count = 0;
	i = 3;
	highvalue = 0;
	while (i >= 0)
	{
		if (tab[i][x] > highvalue)
		{
			highvalue = tab[i][x];
			count++;
		}
		i--;
	}
	if (count != obs[1][x])
		return (0);
	return (1);
}

int		ft_check_col(int tab[][4], int obs[][4], int x)
{
	if (ft_check_col1(tab, obs, x) && ft_check_col2(tab, obs, x))
		return (1);
	return (0);
}
