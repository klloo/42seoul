/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heeyjang <heeyjang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:19:04 by heeyjang          #+#    #+#             */
/*   Updated: 2023/02/14 21:08:33 by heeyjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	c;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ('A' <= c && c <= 'Z')
			str[i] = c + 32;
		i++;
	}
	return (str);
}
