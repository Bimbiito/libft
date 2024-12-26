/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:43:27 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/26 18:53:38 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n) //size es la cantidad de bytes total del resultado, no la cantidad de bytes a compiar, tienes que restarle la cantidad de bytes de dest a size.
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	
	i = 0;
	src_len = 0;
	dest_len = 0;

	while (dest[dest_len] != '\0')
    	 dest_len++;
	while (src[src_len] != '\0')
    {
        src_len++;
	if (n <= dest_len)
		return (n + src_len);
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