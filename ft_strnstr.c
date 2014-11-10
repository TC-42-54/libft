/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:16:50 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/10 14:31:16 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char *)(s1));
	while ((s1[i] != '\0') && (i < n))
	{
		if (s1[i] == s2[j])
		{
			j++;
			if (j == ft_strlen(s2))
				return ((char *)(s1 + (i - (j - 1))));
		}
		else if (s1[i] != s2[j])
		{
			j = 0;
		}
		else if (s2[j] == '\0')
			return (NULL);
		i++;
	}
	return (NULL);
}
