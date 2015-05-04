/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 20:13:27 by tchezier          #+#    #+#             */
/*   Updated: 2015/03/30 20:22:20 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	i;

	if (s)
	{
		i = 0;
		res = (char *)malloc(sizeof(res) * (ft_strlen(s) + 1));
		if (res == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			res[i] = (*f)(s[i]);
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
