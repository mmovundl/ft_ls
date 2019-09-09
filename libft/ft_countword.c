/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 17:01:54 by mmovundl          #+#    #+#             */
/*   Updated: 2019/07/04 14:45:51 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	size_t	nwords;

	nwords = 0;
	while (s && *s != '\0')
	{
		if (s && *s != c && *s != '\0')
			nwords++;
		while (s && *s != c && *s != '\0')
			s++;
		s++;
	}
	return (nwords);
}
