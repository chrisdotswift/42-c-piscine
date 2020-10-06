/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 21:35:50 by asanson           #+#    #+#             */
/*   Updated: 2020/09/21 17:33:04 by asanson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_tab(int tab[][4], int *solution_found);
int		ft_check_double(int tab[][4], int x, int y);
int		ft_check_col(int tab[][4], int obs[][4], int x);
int		ft_check_line(int tab[][4], int obs[][4], int y);

int		ft_backtrack(int tab[][4], int obs[][4], int x, int y)
{
	int solution_found;

	solution_found = 0;
	tab[y][x] = 1;
	// tant qu'on a pas trouve de solution && que la case actuelle n'est pas superieur a 4 (si cest le cas on ferme la branche actuelle et on revient en arriere
	while (tab[y][x] <= 4 && solution_found == 0)
	{
		// si on a pas de doublons sur la meme line/col
		if (ft_check_double(tab, x, y) && x <= 3)
		{
			//si on est a la derniere case d'une ligne, mais pas a la derniere ligne & que cette ligne est bonne, on passe a la ligne suivante
			if (x == 3 && y < 3 && ft_check_line(tab, obs, y))
				solution_found = ft_backtrack(tab, obs, 0, y + 1);
			// si on est a la derniere ligne, mais pas a la fin de cette ligne, & que la colonne actuel est bonne, on passe a la colonne suivante
			if (y == 3 && x < 3 && ft_check_col(tab, obs, x))
				solution_found = ft_backtrack(tab, obs, x + 1, y);
			// si on est ni a la fin d'une ligne, ni a la derniere ligne, on passe a la colonne suivante
			if (y < 3 && x < 3)
				solution_found = ft_backtrack(tab, obs, x + 1, y);
			// si on est a la fin de la derniere ligne, et que cette ligne ET sa colonne sont bonne, on imprime le tableau ET on renvoi 1 dans solution_found
			if (y == 3 && x == 3 && ft_check_line(tab, obs, y)
					&& ft_check_col(tab, obs, x))
				ft_print_tab(tab, &solution_found);
		}
		// si on tombe sur un doublon, on increment la case actuelle
		tab[y][x]++;
	}
	return (solution_found);
}
