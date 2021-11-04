/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfathima <sfathima@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:59:30 by sfathima          #+#    #+#             */
/*   Updated: 2021/10/19 14:01:18 by sfathima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL)
		return (0);
	if (len > (size_t)ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str != NULL)
	{
		ft_memcpy(str, s + start, len);
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (str == NULL)
		return (0);
	ft_memcpy(str, s1, s1_len);
	ft_memcpy(str + s1_len, s2, s2_len);
	str[s1_len + s2_len] = '\0';
	free ((char *)s1);
	return (str);
}

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*t_dst;
	char	*t_src;

	if (!dst && !src)
		return (0);
	t_dst = (char *)dst;
	t_src = (char *)src;
	while (n > 0)
	{
		*t_dst = *t_src;
		t_dst++;
		t_src++;
		n--;
	}
	return (dst);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)malloc(ft_strlen(s) + 1);
	if (res == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
