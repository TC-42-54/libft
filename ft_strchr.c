/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:43:17 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/07 09:07:35 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(char *str, int c)
{
	size_t	x;
	size_t	i;
	char	rc;

	i = 0;
	x = ft_strlen(str);
	rc = (char)c;
	while (i < x)
	{
		if (str[i] == rc)
			return (str + i);
		i++;
	}
	return (NULL);
}
