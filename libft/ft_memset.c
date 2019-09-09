/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:38:23 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/30 15:30:05 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char	*pointer;

	pointer = (char *)b;
	while (n != 0)
	{
		*pointer++ = (unsigned char)c;
		n--;
	}
	return (b);
}
