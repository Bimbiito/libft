/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:34:23 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/26 19:22:19 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int main()
{
	char c = ' ';
	printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));
	c = 31;
	printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));
	c = '~';
	printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));
	return (0);
}*/
