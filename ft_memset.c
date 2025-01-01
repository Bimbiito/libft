/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:50:30 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/26 19:22:54 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = (unsigned char *)ptr;
	val = (unsigned char)value;
	i = 0;
	while (i < num)
	{
		p[i] = val;
		i++;
	}
	return (ptr);
}

/*int main()
{
	char str[50] = "Feliz Navidad Perras";
	printf("Antes de ft_memset: %s\n", str);
	ft_memset(str + 6, '*', 10);
	printf("Después de ft_memset: %s\n", str);
	return 0;
}*/
