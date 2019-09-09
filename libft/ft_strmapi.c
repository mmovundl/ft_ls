/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 12:30:28 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/30 15:49:50 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	h;
	char			*fresh;

	h = 0;
	if (!s || !f)
		return (NULL);
	h = (unsigned int)ft_strlen(s);
	h++;
	if (!(fresh = (char *)malloc(sizeof(char) * h)))
		return (NULL);
	h = 0;
	while (s[h] != '\0')
	{
		fresh[h] = f(h, s[h]);
		h++;
	}
	fresh[h] = '\0';
	return (fresh);
}
