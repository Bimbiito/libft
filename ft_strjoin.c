/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 19:46:30 by marvin            #+#    #+#             */
/*   Updated: 2024/12/25 19:46:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;

	dst = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dst)
		return (0);
	ft_strlcpy(dst, s1, ft_strlen(s2) + ft_strlen(s1) + 1);
	ft_strlcat(dst, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	return (dst);
}
int main(void)
{
    char *s1 = "Ciao, ";
    char *s2 = "mondo!";
    char *result;

    result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    else
    {
        printf("Allocazione di memoria fallita\n");
    }
    return 0;
}
