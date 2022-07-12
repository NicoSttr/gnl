/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsutter <nsutter@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:09:08 by nsutter           #+#    #+#             */
/*   Updated: 2022/06/30 19:12:56 by nsutter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	dst = (char *)malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
	{
		dst[len] = s[len];
		len++;
	}
	dst[len] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		x;
	int		y;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dst == NULL)
		return (NULL);
	x = 0;
	while (s1[x] != '\0')
	{
		dst[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		dst[x + y] = s2[y];
		y++;
	}
	dst[x + y] = '\0';
	return (dst);
}

char	*ft_strchr(const char *s, int c)
{
	int		x;
	char	chr;

	x = 0;
	chr = c;
	while (s[x] != '\0')
	{
		if (s[x] == chr)
			return ((char *)(s + x));
		x++;
	}
	if (s[x] == chr)
		return ((char *)(s + x));
	return (NULL);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			x;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	x = 0;
	while (x < n)
	{
		str1[x] = str2[x];
		x++;
	}
	return (dest);
}
