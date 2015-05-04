/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:16:50 by tchezier          #+#    #+#             */
/*   Updated: 2015/03/30 18:03:12 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2len;
	size_t	i;
	char	*sch;

	if (s1 && s2)
	{
		sch = (char *)s1;
		s2len = ft_strlen(s2);
		i = 0;
		if (!s2len)
			return (sch);
		if ((int)(n - (s2len - 1)) < 0)
			return (NULL);
		while ((*sch != '\0') && n)
		{
			i = (*sch == s2[i]) ? i + 1 : 0;
			if (i == s2len)
				return (sch - (i - 1));
			if ((ft_memcmp(sch, s2, n) == 0) && (((int)(n - (s2len - 1))) >= 0))
				return (sch);
			sch++;
			n--;
		}
	}
	return (NULL);
}
