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
        size_t          i;
        size_t          j;

        i = 0;
        if (*s2 == '\0' )
                return ((char*)s1);
        while (s1[i] != '\0' && i < len)
        {
                j = 0;
                while (s2[j] == s1[i + j] && i + j < len)
                {
                        if (s2[j + 1] == '\0')
                        {
                                return ((char*)s1 + i);
                        }
                        j++;
                }
                i++;
        }
        return (NULL);
}
int main()
{
    const char  *s1 = "BOMDIA";
    const char  *s2 = "DI";
    size_t  len = 6;
    char    *t;

    t = ft_strnstr(s1, s2, len);
    printf("Resutl: %s\n", t);
    return 0;
}

