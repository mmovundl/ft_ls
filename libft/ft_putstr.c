/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:42:09 by mmovundl          #+#    #+#             */
/*   Updated: 2019/06/30 14:14:42 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *str)
{
	int index;

	index = 0;
	if (!(str))
		return ;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
