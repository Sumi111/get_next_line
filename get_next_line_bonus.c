/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfathima <sfathima@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:58:41 by sfathima          #+#    #+#             */
/*   Updated: 2021/10/19 17:24:02 by sfathima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(const char *s)
{
	int	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*get_line(char *str)
{
	char	*s1;
	char	*s2;

	s1 = ft_strchr(str, '\n');
	if (s1 == NULL && *str != 0)
	{
		s2 = ft_strdup(str);
		return (s2);
	}
	else if (s1 != NULL)
	{
		s2 = ft_substr(str, 0, (s1 - str + 1));
		return (s2);
	}
	return (NULL);
}

void	ft_memory(char **mem, int ln)
{
	char	*temp;

	temp = strdup (*mem + ln);
	free(*mem);
	*mem = temp;
}

char	*ft_free(char *memory)
{
	free(memory);
	memory = NULL;
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*str[256];
	char		*buf;
	int			flag;

	flag = 1;
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	while (flag != 0 && (ft_strchr(str[fd], '\n') == NULL))
	{
		flag = read(fd, buf, BUFFER_SIZE);
		if (flag < 0)
			return (ft_free(buf));
		buf[flag] = '\0';
		str[fd] = ft_strjoin(str[fd], buf);
	}
	buf = ft_free(buf);
	buf = get_line(str[fd]);
	if (ft_strlen(str[fd]) == 0)
	{
		str[fd] = ft_free(str[fd]);
		return (NULL);
	}
	ft_memory(&str[fd], ft_strlen(buf));
	return (buf);
}
