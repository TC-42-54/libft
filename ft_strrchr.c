/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 09:46:03 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/07 13:54:05 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(char *str, int c)
{
	size_t	x;
	size_t	i;
	size_t	cn;
	char	rc;

	i = 0;
	x = ft_strlen(str);
	cn = x;
	rc = (char)c;
	while (cn > i)
	{
		if (str[cn] == rc)
			return (str + cn);
		cn--;
	}
	return (NULL);
}
