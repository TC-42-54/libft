/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:10:02 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/09 18:01:10 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *str, size_t n)
{
	char *str2;

	str2 = malloc((ft_strlen(str) + 1) * (sizeof(*str2)));
	str2 = (char *)(str);
	ft_memset(str2, 0, n);
}
