/*
z** my.h for my in /home/lopez_i/rendu/Piscine_C_J09/include
**
** Made by loic lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Fri Oct  9 12:06:14 2015 loic lopez
** Last update Tue Mar  8 19:08:04 2016 Loic Lopez
*/

#ifndef MY_H_
# define MY_H_

# include <stdlib.h>
# include <stdarg.h>

int	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_put_nbr_unsigned(unsigned int nb);
int	my_putstr_noprintable(char *str);
int	my_putnbr_base_size(size_t nbr, char *base);
int	my_printf(const char *format, ...);
int	my_printf_p(size_t pointeur);
int	my_putnbr_base(int nbr, char *base);
char	*my_strcpy(char *dest, char *src);
int	my_strcmp(char *, char *);
int	call_number(va_list list);
int	call_base_octal(va_list list);
int	call_base_x(va_list list);
int	call_base_X(va_list list);
int	call_unsigned(va_list list);
int	call_char(va_list list);
int	call_string(va_list list);
int	call_adress(va_list list);
int	call_binary(va_list list);
int	call_noprintable(va_list list);
char	*my_strdup(char *);
#endif
