/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 11:06:31 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/24 15:13:21 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char const *str, int fd)
{
	int		i;

	i = -1;
	if (str == NULL)
		ft_putstr_fd("(null)", fd);
	while (str[++i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
	}
	ft_putchar_fd('\0', fd);
}
