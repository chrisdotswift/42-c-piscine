// HEADER

#include <stdlib.h>
#include <stdio.h>

int		sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
		if (charset[i++] == c)
			return (1);
	return (0);
}

int		ft_count_word(char *str, char *charset)
{
	int i;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && (sep(str[i], charset) == 1))
			i++;
		if (sep(str[i], charset) == 0)
			word++;
		while (str[i] != '\0' && (sep(str[i], charset) == 0))
			i++;
	}
	return (word);
}

char	*ft_strdup(char *str, char *charset)
{
	int	i;
	int	size;
	char *tmp;

	size = 0;
	while (str[size] && (sep(str[size], charset) == 0))
		size++;
	if (size == 0)
		return (0);
	if (!(tmp = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	**ft_split(char *str, char *charset)
{
	char **tab;
	int size;
	int	i;
	int	x;

	i = 0;
	x = 0;
	if ((size = ft_count_word(str, charset)) == 0)
		return (NULL);
	if (!str || !charset
			|| !(tab = (char **)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	while (str[i])
	{
		while (str[i] && (sep(str[i], charset) == 1))
			i++;
		if (sep(str[i], charset) == 0)
			tab[x++] = ft_strdup(str + i, charset);
		while ((sep(str[i], charset) == 0) && str[i])
			i++;
	}
	tab[x] = 0;
	return (tab);
}

int		main(void)
{
	char str[] = "hello world";
	char charset[] = " ";

	printf("%s", *ft_split(str, charset));
	return (0);
}
// hello

/*
char charset[] = "";
char *charset = "";

hello world
*/
