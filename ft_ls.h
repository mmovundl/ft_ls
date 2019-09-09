/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmovundl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:38:31 by mmovundl          #+#    #+#             */
/*   Updated: 2019/09/09 18:38:48 by mmovundl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_LS_H
# define FT_LS_H
#include "libft/libft.h"
#include <sys/types.h>
#include <dirent.h>

typedef struct people
{
	char	name[32];
	char	last[32];
	unsigned int	age;
	struct	people *next;
}p_list;

#endif
