/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:55:44 by cduong            #+#    #+#             */
/*   Updated: 2020/09/26 18:56:23 by cduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		check_base(char *base)
{
	long a;
	long b;

	a = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[a])
	{
		b = a + 1;
		if (base[a] == '-' || base[a] == '+')
			return (0);
		while (base[b])
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	nb;

	size = ft_strlen(base);
	nb = nbr;
	if (check_base(base) == 1)
	{
		if (nb < 0)
		{
			nb = nb * (-1);
			ft_putchar('-');
		}
		if (nb >= size)
			ft_putnbr_base(nb / size, base);
		ft_putchar(base[nb % size]);
	}
}
