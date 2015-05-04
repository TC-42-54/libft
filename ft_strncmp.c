/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:29:02 by tchezier          #+#    #+#             */
/*   Updated: 2015/01/21 13:10:25 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1 && s2 && (i < (n - 1)) &&
			((s1[i] != '\0') && (s2[i] != '\0')))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
