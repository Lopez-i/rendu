/*
** main.c for main.c in /home/lopez_i/traitements/CPE_2015_corewar/corewar
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sun Mar 27 18:07:22 2016 Loic Lopez
** Last update Sun Mar 27 18:16:51 2016 Loic Lopez
*/

#include "corewar.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	main(int ac, char **av)
{
  (void)av;

  if (ac < 3)
    {
      write(1, "corewar [-dump nbr_cycle] [[-n prog_number] ",
	    my_strlen("corewar [-dump nbr_cycle] [[-n prog_number] " ));
      write(1, "[-a load_address ] prog_name] ...\n",
	    my_strlen("[-a load_address ] prog_name] ...\n"));
    }
  return (0);
}
