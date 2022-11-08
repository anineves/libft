#include "libft.h"

stactic size_t     ft_count(int nb)
{
        int     cont;
        cont = 0;
        
        if (nb <= 0)
        {
               cont++;
        }
        while (nb != 0)
        {
                nb /= 10;
                cont++;
        }
        return(cont);
}

char    *ft_itoa(int nb)
{
        char    *str;
        size_t    cont;
        int     sinal;

        cont = ft_cont(nb)
                
        str = malloc(sizeof(char) * (cont + 1));
        if (str == NULL)
                return (NULL);
        sinal = 1;
        str[cont] = '\0';
        cont--;
        if(nb < 0)
        {
                str[0] = '-';
                sinal = -1;
        }
        else if (nb == 0)
        {
                str[0] = 48;
        }
        while (nb != 0)
        {
                str[cont] = 48 + (nb % 10);
                nb /= 10;
                count--;
        }
        return (str);

}

int     main(void)
{
        printf("%s\n", ft_itoa(1342345));
}

