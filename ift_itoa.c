#include "libft.h"

int     tam(long nb)
{
        int     tam = 0;
        if (nb < 0)
        {
                nb *= -1;
                tam++;
        }
        while (nb > 0)
        {
                nb /= 10;
                tam++;
        }
        return(tam);
}

char    *ft_itoa(int nb)
{
        char    *str;
        long    n;
        int     i;

        n = nb;
        i = tam(n);
        str = malloc(sizeof(char) * (i + 1));
        if (str == NULL)
                return (NULL);
        str[i--] = '\0';
        if (n == 0)
        {
                str[0] = 48;
                return(str);
        }
        if(n < 0)
        {
                str[0] = '-';
                n *= -1;
        }
        while (n > 0)
        {
                str[i] = 48 + (n % 10);
                n /= 10;
                i--;
        }
        return (str);

}

int     main(void)
{
        printf("%s\n", ft_itoa(1342345));
}

