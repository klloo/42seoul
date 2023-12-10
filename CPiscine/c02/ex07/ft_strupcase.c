/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heeyjang <heeyjang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:17:24 by heeyjang          #+#    #+#             */
/*   Updated: 2023/02/14 21:06:41 by heeyjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ('a' <= c && c <= 'z')
			str[i] = c - 32;
		i++;
	}
	return (str);
}
