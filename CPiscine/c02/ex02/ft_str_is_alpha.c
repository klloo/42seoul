/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heeyjang <heeyjang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:58:17 by heeyjang          #+#    #+#             */
/*   Updated: 2023/02/13 15:59:58 by heeyjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	c;

	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		c = *str;
		if (('a' > c || c > 'z') && ('A' > c || c > 'Z'))
			return (0);
		str++;
	}
	return (1);
}