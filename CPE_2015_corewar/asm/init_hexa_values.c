/*
** init_hexa_values.c for init hexa values in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Wed Mar 23 16:26:03 2016 stanislas deneubourg
** Last update Wed Mar 23 16:43:43 2016 stanislas deneubourg
*/

#include "corewar.h"

void    init_hexa_values(t_hexa *hexa)
{
  hexa->value[0] = 0x01;
  hexa->value[1] = 0x02;
  hexa->value[2] = 0x03;
  hexa->value[3] = 0x04;
  hexa->value[4] = 0x05;
  hexa->value[5] = 0x06;
  hexa->value[6] = 0x07;
  hexa->value[7] = 0x08;
  hexa->value[8] = 0x09;
  hexa->value[9] = 0x0a;
  hexa->value[10] = 0x0b;
  hexa->value[11] = 0x0c;
  hexa->value[12] = 0x0d;
  hexa->value[13] = 0x0e;
  hexa->value[14] = 0x0f;
  hexa->value[15] = 0x10;
  hexa->value[16] = 0;
  hexa->last_line = 0;
}
