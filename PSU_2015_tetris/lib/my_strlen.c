/*
** my_strlen.c for mr_strlen in /home/lopez_i/rendu/Piscine_C_J04
** 
** Made by loic lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Thu Oct  1 18:41:40 2015 loic lopez
** Last update Mon Nov 16 11:16:48 2015 loic lopez
*/

#include "include/my.h"

int	my_strlen(char *str)
{
  int v;

  v = 0;
  while (str[v] != '\0')
    {
      v = v + 1;
    }
  return (v);
}
