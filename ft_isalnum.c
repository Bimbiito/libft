/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:21:32 by fgallard          #+#    #+#             */
/*   Updated: 2024/12/15 16:30:25 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int main()
{
	char c = 'A';
	printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
	c = '1';
	printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
	c = '!';
	printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
	return 0;
}*/
