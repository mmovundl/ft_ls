/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:14:16 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/29 06:13:40 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstln;

	dstln = (size_t)ft_strlen(dst);
	if (dstln > dstsize)
		return (ft_strlen(src) + dstsize);
	if (dstln < dstsize)
		ft_strncat(dst, src, dstsize - 1 - dstln);
	return (dstln + ft_strlen(src));
}
