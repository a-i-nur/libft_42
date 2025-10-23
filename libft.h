/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmeto <aakhmeto@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:34:38 by aakhmeto          #+#    #+#             */
/*   Updated: 2025/10/23 16:58:36 by aakhmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Директива препроцессора — это команда, начинающаяся с символа #,
// которую понимает препроцессор (а не компилятор).
// Препроцессор — это первая стадия обработки твоего кода, до компиляции.
// Он не исполняет код, а просто переписывает текст программы:
// вставляет файлы, удаляет куски, делает подстановки и т. д.
// Макрос — это результат работы директивы #define.

//  include guard — защита от двойного включения
// Кроме конструкции #ifndef - #endif
// иногда применяется нестандартная #pragma once

#ifndef LIBFT_H
// = “если не определено”
# define LIBFT_H
// = “определить имя”
// Почему имя макроса именно LIBFT_H?
// Так писать — просто традиция, а не обязательное правило.
// По стандарту пробел не обязателен, но рекомендуется.
// Макрос — это инструкция для препроцессора (а не для компилятора).
// Он заменяет текст в коде до начала компиляции.

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>

int		ft_isalpha(int symbol);
int		ft_isdigit(int symbol);
int		ft_isalnum(int symbol);
int		ft_isascii(int symbol);
int		ft_isprint(int symbol);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *memblock, int symbol, size_t numbytes);
void	ft_bzero(void *memblock, size_t numbytes);
void	*ft_memcpy(void *dstmem, const void *srcmem, size_t numbytes);
void	*ft_memmove(void *dstmem, const void *srcmem, size_t numbytes);
size_t	ft_strlcpy(char *dststr, const char *srcstr, size_t dstsize);
size_t	ft_strlcat(char *dststr, const char *srcstr, size_t dstsize);
int		ft_toupper(int chrctr);
int		ft_tolower(int chrctr);
char	*ft_strchr(const char *str, int chrctr);
char	*ft_strrchr(const char *str, int chrctr);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
void	*ft_memchr(const void *memblock, int byte, size_t numbytes);
int		ft_memcmp(const void *membl1, const void *membl2, size_t numbytes);
char	*ft_strnstr(const char *bigstr, const char *litstr, size_t num);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t countobj, size_t bytes);

#endif
// = “конец условия"