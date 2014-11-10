/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 20:11:27 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/10 14:18:01 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[i]) == 1)
			i++;
		if (str[0] == '-')
		{
			res = (-1) * (ft_atoi(str + 1));
			return (res);
		}
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			res = (res * 10) + ((int)(str[i]) - 48);
			i++;
		}
		else
			i++;
	}
	return (res);
}