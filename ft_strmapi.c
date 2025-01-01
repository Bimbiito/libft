/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:04:30 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 19:24:06 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	map_function(unsigned int index, char c)
{
	if (index % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!s || !str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}
/*int	main(void)
{
	char	*str;
	char	*result;

    str = "HOLA MUNDO!";
    result = ft_strmapi(str, map_function);
    if (result)
    {
        printf("Original: %s\n", str);
        printf("Modified: %s\n", result);
        free(result);
    }
    else
    {
        printf("FAILED!\n");
    }
    return (0);
	str = "HOLA MUNDO!";
	result = ft_strmapi(str, map_function);
	if (result)
	{
		printf("Original: %s\n", str);
		printf("Modified: %s\n", result);
		free(result);
	}
	else
	{
		printf("FAILED!\n");
	}
	return (0);
}*/