/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:43:27 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/17 16:29:51 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len = 0;
	size_t	src_len = 0;
	size_t	i = 0;

	while (dest[dest_len] != '\0')
    {
        dest_len++;
    }
	while (src[src_len] != '\0')
    {
        src_len++;
	if (n <= dest_len)
    {
		return (n + src_len);
    }
    }
	while (src[i] != '\0' && dest_len + i < n - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest_len + src_len);
}

/*int main()
{
	char dest[20] = "Feliz ";
	const char *src = "Navidad";
	size_t n = 15;
	printf("La longitud total es: %lu\n", ft_strlcat(dest, src, n));
	printf("La cadena resultante es: %s\n", dest);
}*/