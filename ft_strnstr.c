/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:52:41 by asousa-n          #+#    #+#             */
/*   Updated: 2022/10/31 14:54:43 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char    *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    int i;
    int j;
    size_t  l;
    
    i = 0;
    j = 0;
    l = 0;
    if (s2[0] == '\0')
    {
        printf("Return s1:\n");
        return ((char *)s1);
    }
    while (*s1 != '\0' && len > 0)
    {
        if (s2[i] == *big)
        {
            l = len;
            while (s2[i] == s1[j] && s2[i] != '\0' && s1[j] && l > 0)
            {
                i++;
                j++;
                l--;
            }
            if (s2[i - 1] == s1[j - 1] && s2[i] == '\0')
                return ((char *)s1);
            i = 0;
            j = 0;
            s1++;
            len--;
        }
        else
        {
            s1++;
            len--;
        }
    }
    return (NULL);
}

int main()
{
    const char  *s1 = "AEFBDEFABCDEF";
    const char  *s2 = "EFA";
    size_t  len = 8;
    char    *t;

    t = ft_strnstr(s1, s2, len);
    printf("Resutl: %s\n", t);
    return 0;
}

