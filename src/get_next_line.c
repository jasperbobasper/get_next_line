/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:27:48 by jpfannku          #+#    #+#             */
/*   Updated: 2021/07/21 16:07:36 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*assign_mem(char *saved, char *buff)
{
	char	*temp;
	char	*chunk;
	int		i;

	chunk = ft_strlchrdup(buff, '\n');
	if (!saved[0])
		temp = ft_calloc(1, 1);
	else
		temp = ft_strlchrdup(saved, '\0');
	free (saved);
	if (!chunk)
		return (NULL);
	i = ft_strlen(chunk);
	ft_memmove(buff, buff + i, BUFFER_SIZE);
	saved = ft_strjoin(temp, chunk);
	free(temp);
	free(chunk);
	return (saved);
}

static char	*make_line(int fd, char *buff)
{
	int		i;
	char	*saved;

	saved = ft_calloc(1, 1);
	while (saved)
	{
		if (!buff[0])
		{
			if (read(fd, buff, BUFFER_SIZE) <= 0)
			{
				if (!saved[0])
				{
					free(saved);
					free(buff);
					return (NULL);
				}
				return (saved);
			}
		}
		saved = assign_mem(saved, buff);
		i = ft_strlen(saved);
		if (saved[i - 1] == '\n')
			break ;
	}
	return (saved);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*buff;

	if (read(fd, 0, 0) == -1)
		return (NULL);
	if (!buff)
	{
		buff = ft_calloc((BUFFER_SIZE + 1), 1);
		if (!buff)
			return (NULL);
		if (read(fd, buff, BUFFER_SIZE) == 0)
			return (NULL);
	}
	line = make_line(fd, buff);
	if (!line)
		return (NULL);
	return (line);
}
