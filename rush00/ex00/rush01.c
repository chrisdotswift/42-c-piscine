/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:57:13 by cduong            #+#    #+#             */
/*   Updated: 2020/09/13 17:28:10 by cduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int ix, int x)
{
	if (ix == 1)
		ft_putchar('/');
	else if (ix == x)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	mid_line(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	last_line(int ix, int x)
{
	if (ix == 1)
		ft_putchar('\\');
	else if (ix == x)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int ix;
	int iy;

	if (x <= 0 || y <= 0)
		return ;
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
		iy++;
		ft_putchar('\n');
	}
}
