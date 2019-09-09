/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 10:00:22 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/30 17:11:25 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		charlen;
	char	*new;

	i = 0;
	j = 0;
	if (!s)
		return (char *)s;
	charlen = ft_strspace(s);
	if (!(new = (char *)malloc((charlen + 1) * sizeof(char))))
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i] != '\0' && charlen != 0)
	{
		new[j] = (char)s[i];
		j++;
		i++;
		charlen--;
	}
	new[j] = '\0';
	return (new);
}
