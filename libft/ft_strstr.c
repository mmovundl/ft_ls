/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 18:14:44 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/27 15:59:53 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *str;
	const char *str2;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		str = haystack;
		str2 = needle;
		while (*str2 != '\0' && *str == *str2)
		{
			str++;
			str2++;
		}
		if (*str2 == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
