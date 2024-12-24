/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:52:06 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/15 16:30:52 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int main()
{
	char c = 'A';
	printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
	c = '1';
	printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
	c = 'z';
	printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
	return 0;
}*/
