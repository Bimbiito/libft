/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:55:10 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 18:01:08 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		s_len;
	size_t		max_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	max_len = s_len - start;
	if (len > max_len)
		len = max_len;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
/*int main(void)
{
    char *s = "Hello, world!";
    char *substr;

   //lo casos avanzan de inicio medio y fuera de rango
    substr = ft_substr(s, 0, 5);
    printf("Subcadena (0, 5): %s\n", substr);
    free(substr);

    substr = ft_substr(s, 7, 5);
    printf("Subcadena (7, 5): %s\n", substr);
    free(substr);

    
    substr = ft_substr(s, 20, 5);
    printf("Subcadena (20, 5): %s\n", substr);
    free(substr);

    return 0;
}*/