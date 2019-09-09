/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:24:18 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/20 16:57:43 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int length;

	length = ft_strlen(s);
	while (length >= 0)
	{
		if (s[length] == c)
		{
			return (char *)(&s[length]);
		}
		else
		{
			length--;
		}
	}
	return (0);
}
