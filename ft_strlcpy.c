/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:28:27 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/17 12:58:09 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i = 0;
	size_t	len_src = 0;

	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (n == 0)
	{
		return (len_src);
	}
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}
	return (len_src);
}

/* int main ()
{
	char dest[20];
	const char *src = "Feliz Navidad Perras";
	size_t n = 10;
	printf("La longitud de la cadena es: %lu\n", ft_strlcpy(dest, src, n));
	printf("La cadena copiada es: %s\n", dest);
}*/