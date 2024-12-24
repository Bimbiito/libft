#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char)c)
        {
            return (char *)s;
        }
        s++;
    }
    return (NULL);
}

/*int main()
{
    const char *s = "Feliz Navidad Perras";
    int c = 'Y';

    printf("Aqui esta tu perdida: %c\n", *ft_strchr(s, c));
}*/
