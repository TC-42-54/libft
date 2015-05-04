/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 16:16:07 by tchezier          #+#    #+#             */
/*   Updated: 2015/03/31 18:23:18 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	fstart(char const *s)
{
	size_t start;

	start = 0;
	while (((s[start] == ' ') || (s[start] == '\t') || (s[start] == '\n')) &&
			(s[start] != '\0'))
		start++;
	return (start);
}

static size_t	fend(char const *s)
{
	size_t end;

	end = ft_strlen(s) - 1;
	while (((s[end] == ' ') || (s[end] == '\t') || (s[end] == '\n')))
		end--;
	return (end);
}

char			*ft_strtrim(char const *s)
{
	size_t	end;
	size_t	start;
	size_t	i;
	char	*ret;

	if (s)
	{
		i = 0;
		start = fstart(s);
		end = fend(s);
		if ((int)(end - start) >= 0)
			ret = (char *)malloc(sizeof(ret) * ((end - start) + 1));
		while ((s[start] != '\0') && (start <= end))
		{
			ret[i] = s[start];
			i++;
			start++;
		}
		ret[i] = '\0';
		if (ret == NULL)
			return (NULL);
		return (ret);
	}
	return (NULL);
}
