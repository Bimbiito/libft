/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:09:32 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 17:58:09 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
void	print_indexed_char(unsigned int i, char *c)
{
    printf("Index %u: %c\n", i, *c);
}

/*int	main(void)
{
    char	str[] = "Hola mundo!";
    
    ft_striteri(str, print_indexed_char);
    return (0);
}*/