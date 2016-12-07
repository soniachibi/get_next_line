/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 01:50:55 by schibi            #+#    #+#             */
/*   Updated: 2016/12/07 00:03:29 by schibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"
# include <stdio.h>

int		end_of_line(char	*str)
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

char	*string_append(char	*tmp_buf, char	*buf)
{
	int		size;
	char	*tmp;
	char	*keep;

	if (tmp_buf == NULL)
	{
		tmp_buf = (char *)malloc(sizeof(char) * ft_strlen(buf) + 1);
		if(!tmp_buf)
			return(NULL);
		ft_strcpy(tmp_buf, buf);
		free(tmp_buf);
		return (tmp_buf);	
	}
	if (buf)
	{
		size = ft_strlen(tmp_buf) + ft_strlen(buf);
		tmp = (char *)malloc(sizeof(char) * size + 1);
		if (!tmp)
			return (0);
		ft_strcpy(tmp, tmp_buf);
		keep = tmp;
		tmp = ft_strcat(tmp, buf);
		free(keep);
		return (tmp);		
	}
	else
		return (0);
}


int		get_next_line(const int fd, char **line)
{	
	char					buf[BUFF_SIZE + 1];
	static	char			*tmp_buf;
	int						i;
	int						ret;

	if (!line)
		return (-1);
	*line = NULL;
	if (fd == -1)
		return (-1);
	while ((i = end_of_line(tmp_buf)) == -1)
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		tmp_buf = string_append(tmp_buf, buf);
		if (!ret)
		{
			*line = ft_strsub(tmp_buf, 0, ft_strlen(tmp_buf));
		if (*tmp_buf)
			{ 
				free(tmp_buf);
				tmp_buf = NULL;
				return (1);
			}
		return (0);
		}
	}
	*line = ft_strsub(tmp_buf, 0, i);
	tmp_buf = ft_strsub(tmp_buf, i + 1, ft_strlen(tmp_buf) - i);
	return (1);
}

int	main()
{
	int		fd;
	char	*line;

	fd = open("sample", O_RDONLY);
	while (get_next_line(fd, &line) != 0)
	{
		printf("%s", line);
	}
}

