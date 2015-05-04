/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/09 13:04:09 by tchezier          #+#    #+#             */
/*   Updated: 2015/01/21 13:15:48 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(const char *s, unsigned int start, size_t len)
{
	char			*tronc;
	unsigned int	i;

	i = 0;
	tronc = malloc((len + 1) * (sizeof(char *)));
	if (tronc != NULL && start < ft_strlen(s))
	{
		while ((i < len) && (s[start] != '\0'))
		{
			tronc[i] = s[start];
			start++;
			i++;
		}
		tronc[i] = '\0';
	}
	else
		return (NULL);
	return ((char *)tronc);
}
