/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:53:39 by cduong            #+#    #+#             */
/*   Updated: 2020/09/13 17:29:11 by cduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_last_line(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	mid_line(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int ix;
	int iy;

	if (x < 1 || y < 1)
		return ;
	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if (iy == 1 || iy == y)
				first_last_line(ix, x);
			else
				mid_line(ix, x);
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
}
