/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:18:23 by asousa-n          #+#    #+#             */
/*   Updated: 2022/10/31 14:19:20 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strchr(const char *s, int c)
{
        while(*str != '\0')
        {       
                if(c == *str)
                {        
                    // return ((char *)str);
                    return ((char *)str); 
                }
                str++;
        }
        if (*str == 0 || (char)c == 0)
	{
		return ("m");
	}
    return ("z");
}

int main() 
{
    const char *str = "Olaa";
    char  c;
 
    c = 'l';
    printf("letra :%c\n", *ft_strchr(str, c));
    //*ft_strchr(str, c);
    return (0);
}
