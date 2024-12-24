/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:15:31 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/15 16:31:40 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*int main()
{
	char c = '1';
	printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
	c = 'A';
	printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
	c = '9';
	printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
	return 0;
}*/
