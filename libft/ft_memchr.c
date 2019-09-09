/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 17:58:52 by mmovundl          #+#    #+#             */
/*   Updated: 2019/07/03 16:54:22 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *src;

	src = (unsigned char *)s;
	if (n == 0)
		return (void *)(src);
	while (n != 0)
	{
		n--;
		if (*src++ == (unsigned char)c)
			return (void *)(--src);
	}
	return (0);
}
