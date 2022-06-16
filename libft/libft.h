/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizsurmeli <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:47:42 by denizsurmeli      #+#    #+#             */
/*   Updated: 2022/06/13 19:35:53 by denizsurmeli     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

void *ft_memset(void *b, int c, size_t l);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t len);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *str);
char *ft_strdup(const char *source);
char *ft_strcpy(char *dest, const char *src);
char *ft_strncpy(char *dest, const char *src, size_t l);
char *ft_strcat(char *s1, const char *s2);
char *ft_strncat(char *s1, const char *s2, size_t n);
size_t ft_strlcat(char *dest, const char *src, size_t dest_size);
char *ft_strchr(const char *s, char c);
char *ft_strrchr(const char *s1, char c);
char *ft_strstr(const char *haystack, const char *needle);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(const char *src);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
#endif
