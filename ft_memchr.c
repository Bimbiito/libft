/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 22:44:35 by marvin            #+#    #+#             */
/*   Updated: 2024/12/24 22:44:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t			i;
    unsigned char	*str;
    unsigned char	ch;

    str = (unsigned char *)s;
    ch = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (str[i] == ch)
            return ((void *)(str + i));
        i++;
    }
    return (NULL);
}
/*int main()
{
    const char str[] = "Hello, world!";
    char ch = 'w';
    char *result;

    result = ft_memchr(str, ch, strlen(str));
    if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    }
    else
    {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}*/