/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 12:05:47 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/24 15:45:08 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char const *s, int fd)
{
	char	*s2;
	char	*s3;
	int		x;

	x = ft_strlen(s);
	s3 = malloc(x + 2);
	s2 = (char *)(s);
	ft_strcpy(s3, s2);
	ft_strcat(s3, "\n\0");
	ft_putstr_fd(s3, fd);
}
