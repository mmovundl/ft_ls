/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 17:13:35 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/30 17:19:15 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strspace(char const *s)
{
	int	i;
	int	len;
	int	spaces;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	spaces = i;
	len = ft_strlen(s);
	if (s[i] != '\0')
	{
		i = len - 1;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			spaces++;
			i--;
		}
	}
	return (len - spaces);
}
