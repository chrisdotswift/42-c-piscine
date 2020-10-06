/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 20:24:17 by cduong            #+#    #+#             */
/*   Updated: 2020/09/28 12:27:00 by cduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	while (power)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
