/*
** my_getnbr.c for my_getnbr in /home/lopez_i/traitement/my_getnbr
**
** Made by loic lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Mon Oct 19 18:12:23 2015 loic lopez
** Last update Tue Mar  1 23:38:39 2016 Loic Lopez
*/

#include "include/my.h"

int	my_getnbr(char *str)
{
  int	i;
  int	s;
  int	nb;

  s = 1;
  i = 0;
  nb = 0;
  while (str[i] && (str[i] == '+' || str[i] == '-'))
    if (str[i++] == '-')
      s *= -1;
  while (str[i] >= '0' && str[i] <= '9')
    nb = nb * 10 + (str[i++] - '0');
  return (nb * s);
}
