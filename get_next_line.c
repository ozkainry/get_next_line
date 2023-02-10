/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozdemi <ozozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:30:47 by ozozdemi          #+#    #+#             */
/*   Updated: 2023/02/10 15:08:40 by ozozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	is_next_line(char *str)
{
	int	i;

	i = 0;
	if (!str)
		printf("LOL");
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	static char	*stach = "";
	static char	*new_stach;
	char		*line;
	int			n;

	n = 1;
	while (n != 0)
	{
		n = read(fd, buf, BUFFER_SIZE);
		buf[BUFFER_SIZE + 1] = '\0';
		stach = gnl_strjoin(stach, buf);
		if (is_next_line(stach) == 1)
		{
			new_stach = malloc(sizeof(char) * (len_after_n(stach) + 1));
			line = malloc(sizeof(char) * (gnl_strlen_n(stach) + 1));
			gnl_strcpy(stach, line);
			free(stach);
			stach = new_stach;
		}
	}
	return (line);
}

int	main(void)
{
	int		fd;
	// int		n = 1;
	// char	buf[50];

	fd = open("test.txt", O_RDONLY);
	// n = read(fd, buf, 10);
	// printf("Coucou\n");
	// printf("%d\n", n);
	// write(1, buf, 10);
	printf("%s", get_next_line(fd));
}
