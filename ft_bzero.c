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

void    ft_bzero(void *s, size_t n)
{
        unsigned char   *ptr;
        size_t  i;

        ptr = (unsigned char *)s;
        i = 0;
        while (i < n)
                ptr[i++] = 0;
}
