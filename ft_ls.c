/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:42:28 by mmovundl          #+#    #+#             */
/*   Updated: 2019/09/09 18:43:03 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
#include <stdio.h>

int	main()
{
	p_list *head = NULL;
	p_list *new;

	p_list *list;

	char	*fname[] = {"troy","tapes","gabe",NULL};
	char	*flast[] = {"dat","drew","sabe",NULL};
	int		age[] = {3,4,5,0};

	int i = 0;
	while(fname[i])
	{
		if((new = (p_list *)malloc(sizeof(p_list))) == NULL)
			return (0);
		ft_strcpy(new->name,fname[i]);
		ft_strcpy(new->last,flast[i]);
		new->age = age[i];
		new->next = head;
		head = new;
		i++;
	}
	list = head;
	while(list != NULL)
	{
		ft_putstr(list->name);
		ft_putchar('\n');
		ft_putstr(list->last);
		ft_putchar('\n');
		ft_putnbr(list->age);
		list = list->next;
	}
	DIR *directory;
	struct dirent *dir;
	directory = opendir(".");;
	while((dir = readdir(directory)) != NULL)
	{
		printf("%s\n ",dir->d_name);
	}
	return 0;
}
