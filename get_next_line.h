/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfathima <sfathima@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 10:41:50 by sfathima          #+#    #+#             */
/*   Updated: 2021/10/19 13:07:06 by sfathima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<string.h>
# include<fcntl.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(const char *s);
void	*ft_memcpy(void *restrictdst, const void *restrictsrc, size_t n);
char	*ft_strdup(const char *s1);
char	*get_line(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_memory(char **str, int ln);
char	*get_free(char memory);

#endif
