/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 10:29:19 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/29 11:17:25 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	num;

	num = n;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (num < 0)
		{
			num = -1 * num;
			ft_putchar('-');
		}
		if (num >= 10)
			ft_putnbr(num / 10);
		ft_putchar((num % 10) + 48);
	}
}