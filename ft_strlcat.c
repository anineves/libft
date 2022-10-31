/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:13:01 by asousa-n          #+#    #+#             */
/*   Updated: 2022/10/28 14:27:48 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*pt_src;

	pt_src = (char *)src;
	i = 0;
	while (i < size && *dst)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	j = 0;
	while (pt_src[j])
	{
		if (j < size - i - 1)
			*dst++ = pt_src[j];
		j++;
	}
	*dst = 0;
	return (j + i);
}
int main ()
{
	char src[] = "Ola";
	char dst[] = "Tudo";
	size_t size = 12;
	
	ft_strlcat(*dst, *src, size)

}
