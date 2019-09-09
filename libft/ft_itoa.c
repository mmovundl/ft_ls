/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:55:14 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/30 10:25:58 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	dig;
	char	*s;
	int		num;

	num = n;
	dig = ft_nlen(n);
	if (n < 0)
	{
		n = n * -1;
		dig++;
	}
	if (!(s = ft_strnew(dig)))
		return (NULL);
	else if (n < -2147483647)
		ft_strcpy(s, "-2147483648");
	else
		while (dig-- >= 1)
		{
			s[dig] = n % 10 + '0';
			n = n / 10;
		}
	if (num < 0)
		s[0] = '-';
	return (s);
}
