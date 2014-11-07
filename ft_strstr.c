/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:21:17 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/07 14:37:59 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(char *s1, char *s2)
{
	size_t cp;
	size_t len;
	size_t i;

	cp = 0;
	i = 0;
	len = ft_strlen(s2);
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[cp])
		{
			cp++;
			if (cp == len)
				return (s1 + (i - (len - 1)));
		}
		else
			cp = 0;
		i++;
	}
	return (NULL);
}
