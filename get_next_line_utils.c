/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:37:30 by oztozdem          #+#    #+#             */
/*   Updated: 2024/11/19 14:32:45 by oztozdem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_one(char *stash)
{
	int	i;

	i = 0;
	while (stash[i])
	{
		if (stash[i] != -1)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_new_line(char *stash)
{
	int	i;

	i = 0;
	while (stash[i])
	{
		if (stash[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	strln(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	strlnao(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == -1)
		i++;
	while (str[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}	

void	init_and_put_one(char *stash, char c)
{
	int	i;

	i = 0;
	while (stash[i] != c)
	{
		stash[i] = -1;
		i++;
	}
	if (stash[i] == '\n')
		stash[i] = -1;
}
