/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:52:53 by jchiang-          #+#    #+#             */
/*   Updated: 2019/03/01 18:51:39 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>
# include <wchar.h>

void				ft_bzero(void *s, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(const char *s);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl(const char *s);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_strdel(char **as);
char				*ft_itoa(int n);
char				*ft_strchr(const char *s, int c);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strcpy(char *dst, const char *src);
int					ft_puterror(const char *str);
int					ft_putchar(char c);
int					ft_atoi(const char *str);
int					ft_isdigit(int c);
int					ft_isspace(char c);
size_t				ft_strlen(const char *str);

/*
** Added extra function
*/

void				ft_putuintmax(uintmax_t nb);
void				ft_putnstr(const char *str, int n);
int					ft_putnchar(size_t n, char c);
int					ft_count_digit(uintmax_t nb, int base);
char				*ft_itoa_base(int c, int base, int len, intmax_t nb);

#endif
