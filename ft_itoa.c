/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 18:30:09 by tchezier          #+#    #+#             */
/*   Updated: 2015/04/04 14:11:17 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_pow(int nb, int pow)
{
	int base;

	base = nb;
	if (pow == 0)
		return (1);
	else if (pow < 0)
	{
		nb = 1 / (ft_pow(nb, (pow * -1)));
	}
	else if (pow > 0)
	{
		while (pow > 1)
		{
			nb = nb * base;
			pow--;
		}
	}
	return (nb);
}

static size_t	prealloc(int n)
{
	size_t tmp;

	tmp = 0;
	if (n < 0)
		n = -1 * n;
	while (1)
	{
		if (n / (ft_pow(10, tmp)) < 10)
			return (tmp);
		tmp++;
	}
}

static char		*subitoa(size_t alloc, size_t i, int n, char *tot)
{
	size_t neg;

	neg = 0;
	if (n < 0)
	{
		n = -1 * n;
		neg = 1;
	}
	if (neg == 1)
	{
		tot[i] = '-';
		i++;
	}
	alloc++;
	while (alloc > 0)
	{
		tot[i] = (((n % ft_pow(10, alloc)) / ft_pow(10, alloc - 1)) + 48);
		i++;
		alloc--;
	}
	tot[i] = '\0';
	return (tot);
}

char			*ft_itoa(int n)
{
	size_t	neg;
	size_t	alloc;
	char	*tot;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	neg = 0;
	i = 0;
	if (n < 0)
		neg = 1;
	alloc = prealloc(n);
	tot = (char *)malloc(sizeof(tot) * (alloc + neg + 1));
	if ((n > -2147483648) && (n <= 2147483647))
		tot = subitoa(alloc, i, n, tot);
	return (tot);
}
