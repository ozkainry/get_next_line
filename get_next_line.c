/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozdemi <ozozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:30:47 by ozozdemi          #+#    #+#             */
/*   Updated: 2023/02/09 19:15:42 by ozozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	is_next_line(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == "\n")
			return (1);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	static char	*stach;
	char		*line;
	int			i;
	int			n;

	while (n != 0)
	{
		if (is_next_line(buf) == 1)
	}
	read(fd, buf, BUFFER_SIZE);
	return ();
}

// int	main(void)
// {
// 	int		fd;
// 	// int		n = 1;
// 	char	buf[50];

// 	fd = open("test.txt", O_RDONLY);
// 	// n = read(fd, buf, 10);
// 	// write(1, buf, 10);
// 	printf("%d\n", (int) get_next_line(fd));
// }
