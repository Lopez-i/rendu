/*
** remove_spaces.c for remove spaces in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Wed Mar 23 15:56:20 2016 stanislas deneubourg
** Last update Wed Mar 23 16:20:55 2016 stanislas deneubourg
*/

#include "corewar.h"

char    *remove_spaces(char *s)
{
  int   i;
  int   j;
  char  *rest;

  rest = malloc(sizeof(char) * my_strlen(s));
  i = 0;
  j = 0;
  while (s[j] == ' ' && s[j] != 0)
    j++;
  while (s[j] != 0)
    rest[i++] = s[j++];
  rest[i] = '\0';
  return (rest);
}
