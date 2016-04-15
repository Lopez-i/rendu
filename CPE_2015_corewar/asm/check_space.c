/*
** check_space.c for check space in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Wed Mar 23 16:26:24 2016 stanislas deneubourg
** Last update Wed Mar 23 16:26:27 2016 stanislas deneubourg
*/

#include "corewar.h"

int     check_space(char *str)
{
  int   i;

  i = 0;
  while (str[i] != ' ' && str[i] != 0)
    i++;
  i++;
  return (i);
}
