/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:54:37 by asousa-n          #+#    #+#             */
/*   Updated: 2022/10/31 13:56:33 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
        while (n > 0 && *s1 == *s2 && *s1)
        {
                s1++;
                s2++;
                n--;
        }
        return (*s1 - *s2);

}

int             main(void)
{
        char    *str1;
        char    *str2;

        str1 = "aaabbcdeef";
        str2 = "aaabbdceef";
        printf("%d\n", ft_strncmp(str1, str2, 10));
        printf("%d\n", strncmp(str1, str2, 10));
}

