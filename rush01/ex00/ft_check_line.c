/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 20:40:13 by asanson           #+#    #+#             */
/*   Updated: 2020/09/21 17:10:38 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_line1(int tab[][4], int obs[][4], int y)
{
	int count;
	int i;
	int highvalue;

	count = 0;
	i = 0;
	highvalue = 0;
	while (i < 4)
	{
		if (tab[y][i] > highvalue)
		{
			highvalue = tab[y][i];
			count++;
		}
		i++;
	}
	if (count != obs[2][y])
		return (0);
	return (1);
}

int		ft_check_line2(int tab[][4], int obs[][4], int y)
{
	int count;
	int i;
	int highvalue;

	count = 0;
	i = 3;
	highvalue = 0;
	while (i >= 0)
	{
		if (tab[y][i] > highvalue)
		{
			highvalue = tab[y][i];
			count++;
		}
		i--;
	}
	if (count != obs[3][y])
		return (0);
	return (1);
}

int		ft_check_line(int tab[][4], int obs[][4], int y)
{
	if (ft_check_line1(tab, obs, y) && ft_check_line2(tab, obs, y))
		return (1);
	return (0);
}
