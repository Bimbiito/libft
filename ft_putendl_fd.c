/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:28:33 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 19:23:16 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	*str;

	str = ft_strjoin(s, "\n");
	ft_putstr_fd(str, fd);
	free(str);
}
/*int	main(void)
{
    ft_putendl_fd("Hello, world!", 1);
    return (0);
}*/