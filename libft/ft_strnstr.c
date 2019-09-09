/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 14:47:01 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/29 06:29:28 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*str2;
	size_t	l;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		str = (char *)haystack;
		str2 = (char *)needle;
		l = len;
		while (*str2 != '\0' && *str == *str2 && l > 0)
		{
			str++;
			str2++;
			l--;
		}
		if (*str2 == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
