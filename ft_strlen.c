/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:20:41 by asousa-n          #+#    #+#             */
/*   Updated: 2022/10/31 13:42:59 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t strlen(const char *s);
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int main ()
{
	char str [] = "Hello again!";
	int count;

	count = ft_strlen(str);
	printf("O tamanho da string e %d \n", count);
	return (0);
}
*/
