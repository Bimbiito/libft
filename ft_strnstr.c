/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 22:47:20 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 18:00:48 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
    size_t	j;

    if (*needle == '\0')
        return ((char *)haystack);
    i = 0;
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len)
        {
            j++;
        }
        if (needle[j] == '\0')
            return ((char *)(haystack + i));
        i++;
    }
    return (NULL);
}


/*int main(void)
{
    const char haystack[] = "Hello, 42 Madrid students!";
    const char needle[] = "42 Madrid";
    size_t len = 20;
    char *result;

    result = ft_strnstr(haystack, needle, len);
    if (result != NULL)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    return 0;
}*/