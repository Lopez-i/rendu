/*
** size.c for size.c in /home/lopez_i/traitements/CPE_2015_BSQ
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Thu Dec 17 14:12:37 2015 Loic Lopez
** Last update Sat Mar  5 22:05:28 2016 Loic Lopez
*/

#include "include/tetris.h"

int	size_of_file(const int fd)
{
  struct stat	sb;

  if (fstat(fd, &sb) != 0)
    my_printf("ERROR\n");
  return (sb.st_size);
}
