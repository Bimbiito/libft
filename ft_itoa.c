/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallard <fgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 19:58:28 by marvin            #+#    #+#             */
/*   Updated: 2024/12/26 19:22:25 by fgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_size(long *ln)
{
	int	size;
	int	i;

	size = 1;
	i = *ln;
	while (i / 10 != 0)
	{
		size++;
		i /= 10;
	}
	if (*ln < 0)
	{
		*ln *= -1;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		size;
	int		i;
	long	ln;

	ln = n;
	size = ft_get_size(&ln);
	c = malloc(size + 1);
	if (c == NULL)
		return (NULL);
	c[size] = '\0';
	c[0] = '-';
	if (n == 0)
		c[0] = '0';
	i = 1;
	while (i < size + 1 && ln != 0)
	{
		c[size - i] = (ln % 10) + '0';
		ln /= 10;
		i++;
	}
	return (c);
}

<<<<<<< HEAD

=======
>>>>>>> dbb36111f6526d59ed26b16d6405ec72bdacc0fe
/*int main(void)
{
	int test_values[] = {0, -123, 456, -2147483648, 2147483647};
	char *result;
	size_t i;

<<<<<<< HEAD
    for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
    {
        result = ft_itoa(test_values[i]);
        if (result)
        {
            printf("ft_itoa(%d) = %s\n", test_values[i], result);
            free(result);
        }
        else
        {
            printf("ft_itoa(%d) failed to allocate memory\n", test_values[i]);
        }
    }
    return 0;
=======
	for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
	{
		result = ft_itoa(test_values[i]);
		if (result)
		{
			printf("ft_itoa(%d) = %s\n", test_values[i], result);
			free(result);
		}
		else
		{
			printf("ft_itoa(%d) failed to allocate memory\n", test_values[i]);
		}
	}
	return (0);
>>>>>>> dbb36111f6526d59ed26b16d6405ec72bdacc0fe
}*/