/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozdemi <ozozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:31:42 by ozozdemi          #+#    #+#             */
/*   Updated: 2023/02/10 14:23:58 by ozozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdint.h>

char	*get_next_line(int fd);
size_t	gnl_strlen(const char *s);
size_t	gnl_strlen_n(const char *s);
char	*gnl_strjoin(char *s1, char *s2);
int		len_after_n(char *str);
int		is_next_line(char *str);
char	*gnl_strcpy(char *src, char *dest);

#endif