/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 22:41:33 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 19:24:00 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void)
{
	char *str1 = "Hello";
	char *str2 = "Hello";
	char *str3 = "Hellp";
	char *str4 = "Hell";

<<<<<<< HEAD
    printf("Comparing '%s' and '%s' (up to 5 chars): %d\n", str1, str2, ft_strncmp(str1, str2, 5));
    printf("Comparing '%s' and '%s' (up to 5 chars): %d\n", str1, str3, ft_strncmp(str1, str3, 5));
    printf("Comparing '%s' and '%s' (up to 5 chars): %d\n", str1, str4, ft_strncmp(str1, str4, 5));
    printf("Comparing '%s' and '%s' (up to 4 chars): %d\n", str1, str4, ft_strncmp(str1, str4, 4));

     return 0;
}*/
=======
	printf("Comparing '%s' and '%s' (up to 5 chars): %d\n", str1, str2,
		ft_strncmp(str1, str2, 5));
	printf("Comparing '%s' and '%s' (up to 5 chars): %d\n", str1, str3,
		ft_strncmp(str1, str3, 5));
	printf("Comparing '%s' and '%s' (up to 5 chars): %d\n", str1, str4,
		ft_strncmp(str1, str4, 5));
	printf("Comparing '%s' and '%s' (up to 4 chars): %d\n", str1, str4,
		ft_strncmp(str1, str4, 4));

	return (0);
}*/
>>>>>>> dbb36111f6526d59ed26b16d6405ec72bdacc0fe
