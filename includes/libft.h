/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchezier <tchezier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:26:32 by tchezier          #+#    #+#             */
/*   Updated: 2014/11/07 17:31:37 by tchezier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
#define BUF_SIZE 1
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_isalpha(int c);
void ft_bzero(char *str, size_t n);
void ft_putchar(char c);
void ft_putstr(char *str);
size_t ft_strlen(const char *str);
void ft_putnbr(int nbr);
void *ft_strcpy(char *src, char *dest);
void *ft_memcpy(char *src, char *dest, size_t n);
void *ft_memccpy(char *src, char *dest, int c, int n);
char *ft_strdup(char *src);
char *ft_strcat(char *src, char *dest);
char *ft_strncat(char *src, char *dest, size_t n);
char *ft_strchr(char *str, int c);
char *ft_strrchr(char *str, int c);
char *ft_strstr(char *s1, char *s2);
void *ft_strncpy(char *src, char *dest, size_t n);
void *ft_memmove(void *src, void *dest, size_t n);
void *ft_memset(char *str, char c, size_t n);
/* void *ft_memchr(void *s, int c, size_t n); */
#endif
