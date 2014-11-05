/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:26:32 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/05 18:06:19 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
#define BUF_SIZE 1
void ft_bzero(char *str, size_t n);
void *ft_memset(char *str, char c, size_t n);
void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strlen(const char *str);
void ft_putnbr(int nbr);
void *ft_strcpy(char *src, char *dest);
void *ft_memcpy(char *src, const char *dest, size_t n);
void *ft_memccpy(char *src, char *dest, int c, int n);
char *ft_strdup(char *src);
void *ft_strncpy(char *src, char *dest, size_t n);
#endif
