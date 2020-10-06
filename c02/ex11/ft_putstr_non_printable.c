/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 18:00:00 by cduong            #+#    #+#             */
/*   Updated: 2020/09/16 20:05:21 by cduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_hex(char str)
{
	unsigned char a;
	unsigned char b;
	unsigned char c;

	c = str;
	a = c / 16;
	b = c % 16;
	ft_putchar('\\');
	if (a < 10)
		a += 48;
	else
		a += 87;
	ft_putchar(a);
	if (b < 10)
		b += 48;
	else
		b += 87;
	ft_putchar(b);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			ft_putstr_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
