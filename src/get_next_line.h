/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:19:24 by jpfannku          #+#    #+#             */
/*   Updated: 2021/07/21 13:59:36 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define    BUFFER_SIZE 32
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char *src);
char	*ft_strlchrdup(const char *str, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_memmove(char *dst, char *src, size_t n);
void	*ft_calloc(size_t n, size_t size);

#endif