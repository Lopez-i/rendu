/*
** my_printf_p_bis.c for my_print in /home/lopez_i/traitements/PSU_2015_my_printf
** 
** Made by loic lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Wed Nov 11 12:30:19 2015 loic lopez
** Last update Mon Nov 16 11:17:02 2015 loic lopez
*/

#include <stdlib.h>
#include "include/my.h"

int	call_adress(va_list list)
{
  my_printf_p(va_arg(list, size_t));
  return (0);
}

int	my_printf_p(size_t ptr)
{
  my_putstr("0x");
  my_putnbr_base_size(ptr, "0123456789abcdef");
  return (0);
}
