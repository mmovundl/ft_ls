/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordsplitr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:44:03 by mmovundl          #+#    #+#             */
/*   Updated: 2019/07/04 14:49:29 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_wordsplitr(char **dest, char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	*word;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		len = ft_wordsize(s, c);
		if (len != 0)
		{
			word = ft_strsub(s, 0, len);
			dest[i] = word;
			i++;
		}
		s = s + len;
		while (*s == c && *s != '\0')
			s++;
	}
	dest[i] = NULL;
}
