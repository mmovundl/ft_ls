/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:33:05 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/27 15:47:39 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int length;

	length = ft_strlen(s);
	while (length >= 0)
	{
		if (*s == c)
			return ((char *)s);
		else
		{
			s++;
			length--;
		}
	}
	return (NULL);
}
