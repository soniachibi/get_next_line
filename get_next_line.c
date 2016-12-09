/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 01:50:55 by schibi            #+#    #+#             */
/*   Updated: 2016/12/08 18:42:26 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		end_of_line(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*string_append(char *tmp_buf, char *buf)
{
	char	*tmp;

	if (tmp_buf == NULL)
	{
		tmp_buf = (char *)malloc(sizeof(char) * ft_strlen(buf) + 1);
		if (!tmp_buf)
			return (NULL);
		ft_strcpy(tmp_buf, buf);
		return (tmp_buf);
	}
	if (buf)
	{
		tmp = ft_strjoin(tmp_buf, buf);
		free(tmp_buf);
		return (tmp);
	}
	else
		return (0);
}

int		get_next_line(const int fd, char **line)
{
	char					buf[BUFF_SIZE + 1];
	static	char			*tmp_buf;
	int						ret;

	if (!line || fd == -1)
		return (-1);
	while ((ret = end_of_line(tmp_buf)) == -1)
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
			return (-1);
		buf[ret] = '\0';
		tmp_buf = string_append(tmp_buf, buf);
		if (!ret && (*line = ft_strsub(tmp_buf, 0, ft_strlen(tmp_buf))))
		{
			if (*tmp_buf)
			{
				free(tmp_buf);
				return (!(tmp_buf = NULL));
			}
			return (0);
		}
	}
	*line = ft_strsub(tmp_buf, 0, ret);
	tmp_buf = ft_strsub(tmp_buf, ret + 1, ft_strlen(tmp_buf) - ret);
	return (1);
}
