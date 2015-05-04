/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 20:41:32 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/13 20:42:02 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if ((c == '\t') || (c == '\n') ||
		(c == '\v') || (c == '\f') ||
		(c == '\r') || (c == ' '))
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int res;
	int x;

	res = 0;
	x = 1;
	if (!*str)
		return (0);
	while (ft_isspace(*str) == 1)
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			x = -1;
		str++;
	}
	while ((*str != '\0'))
	{
		if (ft_isdigit(*str) == 1)
			res = (res * 10) + ((int)(*str) - 48);
		else
			return (res * x);
		str++;
	}
	return (res * x);
}
