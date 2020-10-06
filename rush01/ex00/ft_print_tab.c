/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 20:39:34 by asanson           #+#    #+#             */
/*   Updated: 2020/09/21 17:12:29 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_tab(int tab[][4], int *solution_found)
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(tab[y][x] + 48);
			ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
	(*solution_found)++;
}
