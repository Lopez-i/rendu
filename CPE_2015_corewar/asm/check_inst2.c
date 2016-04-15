/*
** check_inst2.c for check inst 2 in /home/lopez_i/traitements/CPE_2015_corewar/asm
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sat Mar 26 15:06:27 2016 Loic Lopez
** Last update Sun Mar 27 16:24:05 2016 Loic Lopez
*/

#include "corewar.h"

unsigned char	check_inst2(char *str)
{
  int	i;
  unsigned char	ret;

  i = 0;
  while (i < 16)
    {
      if ((my_strncmp(str, op_tab[i].mnemonique, my_strlen(str)) == 0))
	return (ret = op_tab[i].code);
      i++;
    }
  return (0);
}
