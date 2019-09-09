/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:30:38 by mmovundl          #+#    #+#             */
/*   Updated: 2019/07/04 14:06:34 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;

	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dst;
	while (n--)
	{
		*dest1 = *src1;
		if (*src1 == (unsigned char)c)
		{
			return ((unsigned char *)dst + 1);
			break ;
		}
		dst++;
		src++;
		dest1++;
		src1++;
	}
	return (NULL);
}
