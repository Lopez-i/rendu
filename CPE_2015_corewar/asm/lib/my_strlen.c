/*
** my_strlen.c for mr_strlen in /home/lopez_i/rendu/Piscine_C_J04
**
** Made by loic lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Thu Oct  1 18:41:40 2015 loic lopez
** Last update Fri Mar 18 10:42:28 2016 Loic Lopez
*/

#include "include/my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str != NULL && str[i] != 0)
    i++;
  return (i);
}
