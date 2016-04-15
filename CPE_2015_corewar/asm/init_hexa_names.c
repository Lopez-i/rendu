/*
** init_hexa_names.c for init hexa names in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Wed Mar 23 16:18:41 2016 stanislas deneubourg
** Last update Wed Mar 23 16:20:20 2016 stanislas deneubourg
*/

#include "corewar.h"

void    init_hexa_names(t_hexa *hexa)
{
  hexa->name[0] = "live";
  hexa->name[1] = "ld";
  hexa->name[2] = "st";
  hexa->name[3] = "add";
  hexa->name[4] = "sub";
  hexa->name[5] = "and";
  hexa->name[6] = "or";
  hexa->name[7] = "xor";
  hexa->name[8] = "zjmp";
  hexa->name[9] = "ldi";
  hexa->name[10] = "sti";
  hexa->name[11] = "fork";
  hexa->name[12] = "lld";
  hexa->name[13] = "lldi";
  hexa->name[14] = "lfork";
  hexa->name[15] = "aff";
  hexa->name[16] = NULL;
}
