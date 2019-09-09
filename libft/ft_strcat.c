/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 17:02:55 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/30 15:35:20 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int length;

	i = 0;
	length = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[length] = s2[i];
		length++;
		i++;
	}
	s1[length] = '\0';
	return (s1);
}
