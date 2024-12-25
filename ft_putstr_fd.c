/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:23:00 by marvin            #+#    #+#             */
/*   Updated: 2024/12/25 20:23:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
    int		i;

    i = 0;
    if (s)
        while (s[i])
            write(fd, &s[i++], 1);
}
int main(void)
{
    int fd;

    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }
    ft_putstr_fd("Ciao, mondo!", fd);
    close(fd);
    return (0);
}