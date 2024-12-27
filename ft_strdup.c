/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 22:53:05 by marvin            #+#    #+#             */
/*   Updated: 2024/12/24 22:53:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    char	*dup;
    size_t	len;
    size_t	i;

    len = 0;
    while (s1[len])
        len++;
    dup = (char *)malloc((len + 1) * sizeof(char));
    if (!dup)
        return (NULL);
    i = 0;
    while (i < len)
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}


/*int main(void)
{
    char *str = "Hello, World!";
    char *dup_str;

    dup_str = ft_strdup(str);
    if (dup_str)
    {
        printf("Original: %s\n", str);
        printf("Duplicate: %s\n", dup_str);
        free(dup_str);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}*/