/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 09:46:03 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/18 13:57:30 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(char *str, int c)
{
	size_t	x;

	x = ft_strlen(str);
	while ((x > 0) && (str[x] != c))
		x--;
	if (str[x] == c)
		return (str + x);
	return (NULL);
}
