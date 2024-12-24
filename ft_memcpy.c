/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:12:17 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/15 17:24:28 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
	{
		return;
	}
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
}

int main()
{
	char dest[20] = {0}; // Inicializa el destino con ceros
	const char src[20] = "Hola Mundo";
	
	ft_memcpy(dest, src, 10);
	printf("Resultado de ft_memcpy: %s\n", dest);
	return 0;
}
