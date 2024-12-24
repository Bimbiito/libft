/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:28:57 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/15 16:31:23 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int main()
{
	char c = 'A';
	printf("ft_isascii('%c') = %d\n", c, ft_isascii(c));
	c = 128;
	printf("ft_isascii('%c') = %d\n", c, ft_isascii(c));
	c = 127;
	printf("ft_isascii('%c') = %d\n", c, ft_isascii(c));
	return 0;
}*/
