/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 13:12:54 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/27 11:30:15 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = (void *)malloc(size * sizeof(void));
	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_memset(mem, 0, size);
	}
	return (mem);
}
