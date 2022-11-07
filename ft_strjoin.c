#include "libft.h"

char
        *ft_strjoin(char const *s1, char const *s2)
{
        char    *newstr;
        size_t  i;
        size_t  j;

        newstr = (char*)malloc (sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
        if (!newstr)
                return (NULL);
        i = 0;
        j = 0;
        while (s1[i])
        {
                newstr[j++] = s1[i];
                i++;
        }
        i = 0;
        while (s2[i])
        {
                newstr[j++] = s2[i];
                i++;
        }
        newstr[j] = '\0';
        return (newstr);
}

int             main()
{
        char *s1 = "Bom";
        char *s2 = "Dia";
        char *new;
        printf("%s\n%s\n", s1, s2);
        new = ft_strjoin(s1, s2);
        printf("%s\n", new);
        return (0);
}
