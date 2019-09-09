/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:51:23 by mmovundl          #+#    #+#             */
/*   Updated: 2019/07/04 14:38:16 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_memory(size_t len)
{
	char	**dest;

	if (!(dest = (char **)malloc(sizeof(char *) * len + 1)))
		return (NULL);
	dest[0] = NULL;
	return (dest);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**splits;
	size_t	nwords;

	if (!s)
		return (NULL);
	nwords = ft_countword(s, c);
	if (!(splits = ft_memory(nwords)))
		return (NULL);
	ft_wordsplitr(splits, s, c);
	return (splits);
}
