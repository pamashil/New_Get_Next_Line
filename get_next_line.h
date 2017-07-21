/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 13:40:47 by pamashil          #+#    #+#             */
/*   Updated: 2017/07/21 12:24:03 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1

# include "libft/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int	get_next_line(const int fd, char **line);

#endif
