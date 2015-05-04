/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:21:17 by tchezier          #+#    #+#             */
/*   Updated: 2015/03/30 17:47:18 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	s2len;
	size_t	i;
	int		ret;
	char	*sch;

	if (s1 && s2)
	{
		sch = (char *)s1;
		i = 0;
		s2len = ft_strlen(s2);
		if (!s2len)
			return (sch);
		while (*sch != '\0')
		{
			i = (*sch == s2[i]) ? i + 1 : 0;
			if (i == s2len)
				return (sch - (i - 1));
			ret = ft_memcmp(sch, s2, s2len);
			if (ret == 0)
				return (sch);
			sch++;
		}
	}
	return (NULL);
}
