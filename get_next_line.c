/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 09:42:01 by pamashil          #+#    #+#             */
/*   Updated: 2017/07/21 12:22:11 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int		ft_read(int const fd, char **stock)
{
	char		*buff;
	char		*tmp;
	int			val;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	val = read(fd, buff, BUFF_SIZE);
	if (val > 0)
	{
		buff[val] = '\0';
		tmp = ft_strjoin(*stock, buff);
		free(*stock);
		*stock = tmp;
	}
	free(buff);
	return (val);
}

int				get_next_line(int const fd, char **line)
{
	static	char	*stock;
	char			*bin;
	int				val;

	if ((!stock && (stock = (char *)malloc(sizeof(*stock))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	bin = ft_strchr(stock, '\n');
	while (bin == NULL)
	{
		val = ft_read(fd, &stock);
		if (val == 0)
		{
			if (ft_strlen(stock) == 0)
				return (0);
			stock = ft_strjoin(stock, "\n");
		}
		if (val < 0)
			return (-1);
		else
			bin = ft_strchr(stock, '\n');
	}
	*line = ft_strsub(stock, 0, ft_strlen(stock) - ft_strlen(bin));
	stock = ft_strdup(bin + 1);
	return (1);
}
