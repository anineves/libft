/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-n <asousa-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:15:58 by asousa-n          #+#    #+#             */
/*   Updated: 2022/10/31 14:16:44 by asousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
{
int	i;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(char*)(dst + i) = *(char*)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*(char*)(dst + i) = *(char*)(src + i);
			i++;
		}
	}
	return (dst);
}
