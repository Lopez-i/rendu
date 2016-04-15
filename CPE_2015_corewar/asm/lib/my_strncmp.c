/*
** my_strncmp.c for my_strncmp.c in /home/lopez_i/traitements/PSU_2015_tetris/debug
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Thu Mar 17 13:27:10 2016 Loic Lopez
** Last update Tue Mar 22 23:37:45 2016 Loic Lopez
*/

#include "include/my.h"

int		my_strncmp(char *s1, char *s2, int n)
{
  int		i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (-1);
  while (s1[i] != 0 && s2[i] != 0 && i < n - 1)
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i++;
    }
  return (s1[i] - s2[i]);
}
