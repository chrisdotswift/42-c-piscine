/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 21:19:08 by asanson           #+#    #+#             */
/*   Updated: 2020/09/21 17:28:46 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_backtrack(int tab[][4], int obs[][4], int x, int y);

int		ft_obscheck(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	// on parcours notre chaine de caractere
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			count++;
			i++;
		}
		else
			return (0);
		if (str[i] == '\0')
			break ;
		if (str[i] == ' ')
			i++;
		else
			return (0);
	}
	if (count != 16)
		return (0);
	else
		return (1);
}

void	ft_assign_obs(int obs[][4], char *str)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			obs[y][x] = str[i] - 48;
			x++;
		}
		if (x == 4)
		{
			y++;
			x = 0;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int tab[4][4];
	int obs[4][4];
	// si on a pas 2 arguments, on renvoi une erreur et on ne lance pas le programme
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	// on verifie notre string 
	if (ft_obscheck(argv[1]))
	{
		// si elle est correcte on place les observateur dans notre tableau obs
		ft_assign_obs(obs, argv[1]);
		// on lance la fonction backtrack, si elle renvoi 0, elle n'a pas trouve de solution, on envoi un message d'erreur, sinon elle a deja afficher notre tableau avec les solution
		if (ft_backtrack(tab, obs, 0, 0) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}
