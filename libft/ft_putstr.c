/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamashil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 20:35:46 by pamashil          #+#    #+#             */
/*   Updated: 2017/06/22 12:27:49 by pamashil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}
