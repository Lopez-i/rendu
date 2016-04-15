/*
** remove_start.c for remove start in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Wed Mar 23 15:57:57 2016 stanislas deneubourg
** Last update Wed Mar 23 16:21:06 2016 stanislas deneubourg
*/

#include "corewar.h"

int	remove_start(char *s)
{
  int	i;

  i = 0;
  while (s[i] == ' ')
    i++;
  i++;
  return (i);
}
