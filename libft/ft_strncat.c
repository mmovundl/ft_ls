/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:36:28 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/30 15:38:11 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	length;

	length = ft_strlen(s1);
	if (!s2 && n == 0)
		return (s1);
	else
		while (n != 0 && *s2 != '\0')
		{
			s1[length] = *s2;
			n--;
			s2++;
			length++;
		}
	s1[length] = '\0';
	return (s1);
}
