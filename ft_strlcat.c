/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:43:27 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/26 19:32:54 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
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
		src_len++;
	if (n <= dest_len)
		return (n + src_len);
	while (src[i] != '\0' && dest_len + i < n - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char dest[] = "Hola ";
	const char *src = "Mundo";
	size_t n = 0;
	printf("La longitud total es: %lu\n", ft_strlcat(dest, src, n));
	printf("La cadena resultante es: %s\n", dest);

	char dest1[] = "Hola ";
	const char *src1 = "Mundo";
	printf("Original: La longitud total es: %lu\n", strlcat(dest1, src1, n));
	printf("Original: La cadena resultante es: %s\n", dest1);
}*/