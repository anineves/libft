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
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

//retorna a primeira ocorrencia 
int main() 
{
    const char *str = "Olaa";
    char  c;
 
    c = 'l';
    printf("letra :%c\n", *ft_strchr(str, c));
    //*ft_strchr(str, c);
    return (0);
}
