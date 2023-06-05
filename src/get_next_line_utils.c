/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfannku <jpfannku@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:25:32 by jpfannku          #+#    #+#             */
/*   Updated: 2021/07/21 16:06:59 by jpfannku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(n * size);
	if (!str)
		return (NULL);
	while (i < n * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

size_t	ft_strlen(const char *src)
{
	size_t	y;

	y = 0;
	while (src[y] != 0)
		y++;
	return (y);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sz;
	char	*str;
	int		x;
	int		y;

	x = 0;
	sz = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * sz + 1);
	if (!str)
		return (NULL);
	while (s1[x] != 0)
	{
		str[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] != 0)
	{
		str[x] = s2[y];
		x++;
		y++;
	}
	str[x] = 0;
	return (str);
}

char	*ft_strlchrdup(const char *str, char c)
{
	char	*s;
	size_t	x;
	size_t	len;
	size_t	sz;

	sz = 0;
	x = 0;
	len = ft_strlen(str);
	if (len == 0)
		return (NULL);
	while (str[sz] != c && sz < len)
		sz++;
	if (len > sz)
		len = sz + 1;
	s = (char *)malloc(len * sizeof(char) + 1);
	if (!s)
		return (NULL);
	while (x < len)
	{
		s[x] = str[x];
		x++;
	}
	s[x] = 0;
	return (s);
}

char	*ft_memmove(char *dst, char *src, size_t n)
{
	size_t	y;
	char	*dst_ptr;
	char	*src_ptr;

	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	y = 0;
	while (y < n && src_ptr[y])
	{
		dst_ptr[y] = src_ptr[y];
		y++;
	}
	while (y < n)
	{
		dst_ptr[y] = '\0';
		y++;
	}
	return (dst);
}
