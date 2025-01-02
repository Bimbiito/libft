/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 19:52:12 by marvin            #+#    #+#             */
/*   Updated: 2025/01/02 17:58:14 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	occurrences(char const *s, char c)
{
	int	index;
	int	res;

	index = 0;
	res = 0;
	while (s[index])
	{
		if (s[index] == c && s[index + 1] && s[index + 1] != c)
			res++;
		index++;
	}
	return (res);
}

static char	*splitter(char const *s, int index, char c)
{
	int		count;
	int		count2;
	char	*res;

	while (*s && index > 0)
	{
		if (*s == c && *(s + 1) != c)
			index--;
		s++;
	}
	count = 0;
	while (s[count] && s[count] != c)
		count++;
	res = (char *)malloc(count + 1);
	if (res == 0)
		return (NULL);
	res[count] = 0;
	count2 = 0;
	while (count > count2)
	{
		res[count2] = s[count2];
		count2++;
	}
	return (res);
}

static char	**filler(char const *s, char c)
{
	int		nseg;
	char	**res;
	int		index;

	nseg = occurrences(s, c) + 1;
	res = (char **)malloc((nseg + 1) * sizeof(char *));
	if (res == 0)
		return (0);
	res[nseg] = 0;
	index = 0;
	while (index < nseg)
	{
		res[index] = splitter(s, index, c);
		if (res[index] == 0)
		{
			while (index-- > 0)
				free(res[index]);
			free(res);
			return (0);
		}
		index++;
	}
	return (res);
}

static char	**case_empty(void)
{
	char	**res;

	res = (char **)malloc(sizeof(char **));
	if (res == 0)
		return (0);
	res[0] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (0);
	while (*s == c)
	{
		if (*s == 0)
			return (case_empty());
		s++;
	}
	if (*s == 0)
		return (case_empty());
	return (filler(s, c));
}
/*int main(void)
return (filler(s, c));
}
/*   int main(void)
{
char		**result;
int			i;

// Caso de prueba: dividir una cadena por espacios
result = ft_split("Hola mundo esto es una prueba", ' ');
if (result)
{
	for (i = 0; result[i] != NULL; i++)
	{
		printf("Subcadena %d: %s\n", i, result[i]);
		free(result[i]);
	}
	free(result);
}

// Caso de prueba: dividir una cadena por comas
result = ft_split("Hola,mundo,esto,es,una,prueba", ',');
if (result)
{
	for (i = 0; result[i] != NULL; i++)
	{
		printf("Subcadena %d: %s\n", i, result[i]);
		free(result[i]);
	}
	free(result);
}

return (0);
}*/