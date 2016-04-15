/*
** check_header.c for check header in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Wed Mar 23 16:24:37 2016 stanislas deneubourg
** Last update Fri Mar 25 19:07:59 2016 Loic Lopez
*/

#include "corewar.h"

char     *check_header_comment(char *s, int i)
{
  int	j;

  if (s == NULL)
    {
      my_printf("%s%i%c\n", SYNTAX_ERROR, i, '.');
      exit(0);
    }
  if (my_strncmp(s, COMMENT_CMD_STRING, my_strlen(COMMENT_CMD_STRING)) != 0)
    {
      my_printf("%s%i%c\n", SYNTAX_ERROR, i, '.');
      exit(0);
    }
  j = 0;
  while (s[j] != '"')
    j++;
  return (&s[j]);
}

char     *check_header_name(char *s, int i)
{
  int	j;

  if (s == NULL)
    {
      my_printf("%s%i%c\n", SYNTAX_ERROR, i, '.');
      exit(0);
    }
  if (my_strncmp(s, NAME_CMD_STRING, my_strlen(NAME_CMD_STRING)) != 0)
    {
      my_printf("%s%i%c\n", SYNTAX_ERROR, i, '.');
      exit(0);
    }
  j = 0;
  while (s[j] != '"')
    j++;
  return (&s[j]);
}
