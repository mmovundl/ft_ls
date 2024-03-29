/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:42:28 by mmovundl          #+#    #+#             */
/*   Updated: 2019/09/12 14:54:16 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <stdio.h>

void ft_basicLS(char *str)
{
		if(ft_strcmp(str,".") && ft_strcmp(str,"..") && 
				ft_strstart(str,'.') == 0)
		{
			ft_putstr(str);
			ft_putstr("\t\t");
		}
}

int	main(int argc, char *argv[])
{
	DIR *directory;
	struct dirent *dir;
	directory = opendir(".");;
	while((dir = readdir(directory)) != NULL)
	{
		ft_basicLS(dir->d_name);
	}
	ft_putchar('\n');
	return 0;
}
