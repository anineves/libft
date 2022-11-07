/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:19:32 by asousa-n          #+#    #+#             */
/*   Updated: 2022/10/31 14:20:22 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char    *ft_strrchr(const char *s, int c)
{
        unsigned int    i;
  
        i = ft_strlen(s);
  
        if (c == '\0')
                return ((char *)&s[i]);
  
        while (i > 0)
        {
                if (s[i] == (char)c)
                        return ((char *)&s[i]);
                i--;
        }
        return (NULL);
}


int main()
{
    const char *s = "Olaa";
    char  c;

    c = 'a';
    printf("letra :%c\n", *ft_strchr(s, c));
    //*ft_strchr(str, c);
    return (0);
}
      
