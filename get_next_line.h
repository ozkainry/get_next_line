/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:37:32 by oztozdem          #+#    #+#             */
/*   Updated: 2024/11/19 15:05:04 by oztozdem         ###   ########.fr       */
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
char	*ft_condition(char stash[BUFFER_SIZE], int fd, char *buff, int n);
char	*init_buff(void);
char	*ft_join_new_line(char *buff, char *stash);
char	*ft_join(char *buff, char *stash);
int		ft_one(char *stash);
int		ft_check_new_line(char *stash);
int		strln(char *str);
int		strlnao(char *str, char c);
void	init_and_put_one(char *stash, char c);

#endif