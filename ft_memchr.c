/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:22:07 by asousa-n          #+#    #+#             */
/*   Updated: 2022/10/31 11:07:00 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char*)s;
	while (n-- > 0)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
// Retorna um ponteiro para a primeira ocorrencia de um caracter. se nao encontrar retorna NULL
int main()
{
	int arr1[] = {1, 2};
	int arr2[] = {3, 4};
	if(ft_memchr(arr1, 4, sizeof(int) * 2) != NULL) {
		printf("found");
	}else{
		printf("Didnt find");
	}
	return(0);

}
