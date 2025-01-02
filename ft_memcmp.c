/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 22:41:50 by marvin            #+#    #+#             */
/*   Updated: 2025/01/02 17:54:12 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Hellp";
	size_t n = 5i;

	printf("Comparing str1 and str2: %d\n", ft_memcmp(str1, str2, n));
		// retorna 0
	printf("Comparing str1 and str3: %d\n", ft_memcmp(str1, str3, n));
		// retorna valor negativo
	printf("Comparing str3 and str1: %d\n", ft_memcmp(str3, str1, n));
		// Retorna valor positivo

	return (0);
}*/