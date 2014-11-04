/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:26:32 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/04 19:44:11 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1
void ft_bzero(char *str, int n);
void *ft_memset(char *str, char c, int n);
void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_putnbr(int nbr);
void *ft_strcpy(char *src, char *dest);
void *ft_memcpy(char *src, char *dest, int n);
void *ft_memccpy(char *src, char *dest, int c, int n);
char *ft_strdup(char *src);
#endif
