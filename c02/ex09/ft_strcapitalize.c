/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:09:49 by cduong            #+#    #+#             */
/*   Updated: 2020/09/21 14:13:43 by cduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) &&
				((str[i - 1] < 48) ||
				(str[i - 1] > 57 && str[i - 1] < 65) ||
				(str[i - 1] > 90 && str[i - 1] < 97) ||
				(str[i - 1] > 122)))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
