/*
** my_strdup.c for my_strdup in /home/lopez_i/rendu/Piscine_C_J08/ex_01
**
** Made by loic lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Thu Oct  8 09:43:49 2015 loic lopez
** Last update Tue Mar  8 19:03:50 2016 Loic Lopez
*/

#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

char	*my_strdup(char *src)
{
  char	*dest;

  if ((dest = malloc(my_strlen(src))) == 0)
    {
      return (0);
    }
  my_strcpy(dest, src);
  return (dest);
}
