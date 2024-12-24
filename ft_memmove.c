/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:28:12 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/15 17:17:43 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest < src || dest >= src + n)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		}
	}
}

/*int main()
{
	char dest[50] = "Feliz Navidad Perras";
	printf("Antes de ft_memmove: %s\n", dest);
	ft_memmove(dest + 6, dest, 10);
	printf("Después de ft_memmove: %s\n", dest);
	return 0;
}*/
