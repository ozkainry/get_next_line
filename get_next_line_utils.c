/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozdemi <ozozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:31:30 by ozozdemi          #+#    #+#             */
/*   Updated: 2023/02/10 15:07:51 by ozozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gnl_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	gnl_strlen_n(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\n')
		i++;
	return (i);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*def;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	def = (char *)malloc(sizeof(char) * (gnl_strlen(s1) + gnl_strlen(s2)+ 1));
	if (def == NULL)
		return (NULL);
	while (s1[i])
	{
		def[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		def[i] = s2[j];
		i++;
		j++;
	}
	def[i] = '\0';
	return (def);
}

int	len_after_n(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (str[i] != '\n')
		i--;
	while (str[i])
	{
		i++;
		j++;
	}
	j++;
	return (j);
}

char	*gnl_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
