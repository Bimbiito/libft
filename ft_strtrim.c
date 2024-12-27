/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 19:50:15 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 19:23:38 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;

	if ((!*s1 && !*set) || (!*s1 && *set))
		return (ft_strdup(""));
	end = ft_strlen(s1);
	start = 0;
	while (ft_strchr(set, s1[end - 1]))
		end--;
	while (ft_strchr(set, s1[start]))
		start++;
	return (ft_substr(s1, start, end - start));
}
/*int main(void)
{
	char *s1 = "  Hello World  ";
	char *set = " ";
	char *trimmed_str;

	trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str)
	{
		printf("Original string: '%s'\n", s1);
		printf("Trimmed string: '%s'\n", trimmed_str);
		free(trimmed_str);
	}
	else
	{
		printf("Trimming failed.\n");
	}

<<<<<<< HEAD
    return 0;
=======
	return (0);
>>>>>>> dbb36111f6526d59ed26b16d6405ec72bdacc0fe
}*/