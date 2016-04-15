/*
** replace_quotes.c for replace quotes in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Wed Mar 23 16:26:52 2016 stanislas deneubourg
** Last update Fri Mar 25 19:10:53 2016 Loic Lopez
*/

#include "corewar.h"

char    *replace_quotes(char *str)
{
  int   i;
  char  *rest;
  int	check;

  check = 1;
  i = 0;
  rest = malloc(sizeof(char) * my_strlen(str));
  while (str[check] != '"')
    rest[i++] = str[check++];
  rest[i] = '\0';
  return (rest);
}
