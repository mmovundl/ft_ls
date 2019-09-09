/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:42:51 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/27 16:48:07 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0 && i != n)
		return (-1);
	else if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0 && i != n)
		return (1);
	else
		return (0);
}
