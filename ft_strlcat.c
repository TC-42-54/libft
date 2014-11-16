/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:45:34 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/13 20:40:40 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
  char *d = (char *)dst;
  char *s = (char *)src;
  size_t n = size;
  size_t dlen;

  while (n-- > 0 && *d != '\0')
    d++;
  dlen = ft_strlen(d) - ft_strlen(dst);
  n = size - dlen;

  if (n == 0)
    return (dlen + ft_strlen(s));
  while (*s != '\0')
  {
    if (n-- > 1)
      *d++ = *s;
  
    s++;
  }
  *d = '\0';
  return (dlen + (ft_strlen(s) - ft_strlen(src)));
}
