/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 22:33:27 by marvin            #+#    #+#             */
/*   Updated: 2024/12/24 22:33:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)
{
    int sign;
    int result;
    int i;
    
    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result *sign);
}

int main(void)
{
    const char *str1 = "   -1234";
    const char *str2 = "42";
    const char *str3 = "   +5678";
    const char *str4 = "   2147483647";
    const char *str5 = "   -2147483648";

    printf("String: '%s' -> Integer: %d\n", str1, ft_atoi(str1));
    printf("String: '%s' -> Integer: %d\n", str2, ft_atoi(str2));
    printf("String: '%s' -> Integer: %d\n", str3, ft_atoi(str3));
    printf("String: '%s' -> Integer: %d\n", str4, ft_atoi(str4));
    printf("String: '%s' -> Integer: %d\n", str5, ft_atoi(str5));

    return 0;
}

