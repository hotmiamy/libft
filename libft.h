/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-n <llopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:12:28 by llopes-n          #+#    #+#             */
/*   Updated: 2021/09/05 17:11:47 by llopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
void	*ft_memset(void *dest, int c, size_t len);
void	ft_bzero(void *b, size_t lenght);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *string, int c);
char	*ft_strrchr(const char *string, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
void	*ft_memchr(const void *byte, int chr, size_t len);
int		ft_memcmp(const void *byte1, const void *byte2, size_t len);
char	*ft_strnstr(const char *bigStr, const char *littleStr, size_t len);
int		ft_atoi(const char *numstr);
void	*ft_calloc(size_t number, size_t size);
char	*ft_strdup(const char *str);

#endif
