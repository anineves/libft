/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:10:58 by asousa-n          #+#    #+#             */
/*   Updated: 2022/10/31 14:14:10 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
        size_t  i;

        char *string;

        string = (char *)s;

        i = 0;
        while (i < n)
        {
                string[i] = '\0';
                i++;
        }
}

int main ()
{
        int s[3] = {3, 2, 4} ;

        printf("%d %d\n", s[0], s[1], s[2]);

        ft_bzero(s, 2 * sizeof(int));
        printf("%d %d\n", s[0], s[1], s[2]);
        return (0);
}
