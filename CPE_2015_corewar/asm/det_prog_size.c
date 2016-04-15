/*
** det_prog_size.c for det prog size in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Sun Mar 27 13:55:10 2016 stanislas deneubourg
** Last update Sun Mar 27 15:10:32 2016 Loic Lopez
*/

#include "corewar.h"

int	det_prog_size(char *file)
{
  int	fd;
  char	*str;
  int	total_size;

  fd = open(file, O_RDONLY);
  if ((str = malloc(sizeof(char) * 4096 + 1)) == NULL)
    return (0);
  total_size = read(fd, str, 378);
  close(fd);
  free(str);
  return (total_size);
}
