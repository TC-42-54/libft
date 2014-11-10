/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:21:17 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/10 14:33:28 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	len2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len2 = ft_strlen(s2);
	if (s2[0] == '\0')
		return ((char *)(s1));
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[j])
		{
			j++;
			if (j == len2)
				return ((char *)(s1 + (i - (j - 1))));
		}
		else if (s1[i] != s2[j])
		{
			j = 0;
		}
		i++;
	}
	return (NULL);
}
