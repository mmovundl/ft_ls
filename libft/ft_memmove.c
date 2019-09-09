/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:18:43 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/30 13:32:17 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	dest1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	if (dest1 > src1)
	{
		i = len;
		while (i-- > 0)
			dest1[i] = src1[i];
	}
	else
		while (i < len)
		{
			dest1[i] = src1[i];
			i++;
		}
	return (dst);
}
