/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:50:18 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/27 11:33:14 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*src1;
	char		*dst1;
	int			i;

	i = 0;
	if (!src && !dst)
		return (NULL);
	dst1 = dst;
	src1 = src;
	while (n > 0)
	{
		dst1[i] = src1[i];
		i++;
		n--;
	}
	return (dst);
}
