/*
** main.c for main.c in /home/lopez_i/traitements/CPE_2015_corewar/asm
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sat Mar 26 17:38:00 2016 Loic Lopez
** Last update Sun Mar 27 20:12:11 2016 Loic Lopez
*/

#include "corewar.h"

int	main(int ac, char **argv)
{
  t_hexa	*hexa;
  header_t	*header;
  int		fd;
  int		f;

  if (ac == 3)
    {
      if ((hexa = malloc(sizeof(t_hexa))) == NULL)
	return (0);
      if ((header = malloc(sizeof(header_t))) == NULL)
        return (0);
      fd = open(argv[1], O_RDONLY);
      f = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, S_IRWXU);
      header->prog_size = det_prog_size(argv[1]);
      writing_magic(f, COREWAR_EXEC_MAGIC);
      if (fd == -1 || f == -1)
	return (0);
      init_hexa_values(hexa);
      init_hexa_names(hexa);
      init_start(fd, f, hexa, header);
    }
  else
    my_printf("asm file_name[.s] file_name[.cor]\n");
  close(fd);
  close(f);
  return (0);
}
