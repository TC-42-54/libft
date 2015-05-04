/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/09 14:16:03 by tchezier          #+#    #+#             */
/*   Updated: 2015/01/21 13:08:00 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*conc;
	int		len1;
	int		len2;
	int		len3;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len3 = (len1 + len2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	conc = malloc((len3 + 1) * (sizeof(char)));
	if (conc != NULL)
	{
		ft_strcpy(conc, s1);
		ft_strcat(conc, (char *)s2);
		conc[len3 + 1] = '\0';
	}
	else
		return (NULL);
	return (conc);
}
