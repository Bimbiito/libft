/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 22:33:55 by marvin            #+#    #+#             */
/*   Updated: 2024/12/24 22:33:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return(c + 32);
    }
    else
    {
        return (c);
    }
}

/*int     main()
{
    char prueba = 't';

    int result = ft_tolower(prueba);

    printf("Origin: %c\n Conversion: %i", prueba, result);
}*/
