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