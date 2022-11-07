#include "libft.h"

char
        *ft_substr(char const *s, unsigned int start, size_t len)
{
        size_t  i;
        size_t  j;
        char    *str;

        str = (char*)malloc(sizeof(*s) * (len + 1));
        if (!str)
                return (NULL);
        i = 0;
        j = 0;
        while (s[i])
        {
                if (i >= start && j < len)
                {
                        str[j] = s[i];
                        j++;
                }
                i++;
        }
        str[j] = 0;
        return (str);
}

int             main()
{
        char s[] = "String para teste";
        char *str;
        int start = 7;
        int length = 4;
        printf("%s\n", s);
        str = ft_substr(s, start, length);
        printf("%s\n", str);
        return (0);
}
~   
