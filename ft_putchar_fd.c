/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:18:12 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 19:23:03 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD

#include "libft.h"
=======
#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
>>>>>>> dbb36111f6526d59ed26b16d6405ec72bdacc0fe

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main(void)
{
	int fd;

<<<<<<< HEAD
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }
    ft_putchar_fd('A', fd);
    close(fd);
    return (0);
=======
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}
	ft_putchar_fd('A', fd);
	close(fd);
	return (0);
>>>>>>> dbb36111f6526d59ed26b16d6405ec72bdacc0fe
}*/