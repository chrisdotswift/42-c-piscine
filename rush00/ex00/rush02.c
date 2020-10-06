/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:50:22 by cduong            #+#    #+#             */
/*   Updated: 2020/09/13 16:52:59 by cduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	mid_line(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	last_line(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int ix;
	int iy;

	if (x < 1 || y < 1)
	{
		return ;
	}
	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if (iy == 1)
				first_line(ix, x);
			else if (iy == y)
				last_line(ix, x);
			else
				mid_line(ix, x);
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
}
