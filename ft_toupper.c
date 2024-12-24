/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 22:33:37 by marvin            #+#    #+#             */
/*   Updated: 2024/12/24 22:33:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

    int ft_toupper(int c)
    {
        if(c >= 'a' && c <= 'z')
        {
            return (c -32);
        }
        else 
        {
            return(c);
        }
    }

   /* int main()
    {
       char prueba = 'T';

        int result = ft_toupper(prueba);

        printf("prueba: %c\n Conversion: %i", prueba, result);

    } */