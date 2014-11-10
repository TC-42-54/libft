/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:00:07 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/10 14:26:51 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr(char *str)
{
	int		i;
	char	*str2;

	i = -1;
	if (str == NULL)
	{
		str2 = ft_strdup("(null)");
		ft_putstr(str2);
	}
	else
	{
		while (str[++i] != '\0')
		{
			ft_putchar(str[i]);
		}
		ft_putchar('\n');
	}
}
