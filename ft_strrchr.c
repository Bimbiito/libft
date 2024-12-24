#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    const char *last = NULL;

    while (*s != '\0')
    {
        if (*s == (char)c)
        {
            last = s;
        }
        s++;
    }
    if (c == '\0')
    {
        return (char *)s;
    }
    return (char *)last;
}

/*int main()
{
    const char *s = "Feliz Navidad Perras";
    int c = 'a';

    printf("Aqui esta tu perdida: %c\n", *ft_strrchr(s, c));
}*/