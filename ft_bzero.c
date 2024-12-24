/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:33:40 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/15 17:21:27 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*int main()
{
	char str[50] = "Feliz Navidad Perras";
	printf("Antes de ft_bzero: %s\n", str);
	ft_bzero(str + 5, 10);
	printf("Despues de ft_bzero: %s\n", str);
	return 0;
}*/
