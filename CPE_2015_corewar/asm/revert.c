/*
** revert.c for revert.c in /home/lopez_i/traitements/CPE_2015_corewar/asm
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sat Mar 26 17:52:31 2016 Loic Lopez
** Last update Sun Mar 27 19:15:04 2016 Loic Lopez
*/

#include "corewar.h"

void	writing_basic(int f, int n)
{
  unsigned char move[4];
  unsigned char octets[4];

  octets[0] = n >> 0;
  octets[1] = n >> 8;
  octets[2] = n >> 16;
  octets[3] = n >> 24;
  move[0] = octets[0];
  move[1] = octets[1];
  move[2] = octets[2];
  move[3] = octets[3];
  octets[0] = move[3];
  octets[1] = move[2];
  octets[2] = move[1];
  octets[3] = move[0];
  write(f, octets, sizeof(int));
}

void	writing_2_octets(int f, int n)
{
  unsigned char move[2];
  unsigned char octets[2];

  octets[0] = n >> 0;
  octets[1] = n >> 8;
  move[0] = octets[0];
  move[1] = octets[1];
  octets[0] = move[1];
  octets[1] = move[0];
  write(f, octets, 2);
}

void	writing_magic(int f, int n)
{
  unsigned char move[4];
  unsigned char octets[4];

  octets[0] = n >> 0;
  octets[1] = n >> 8;
  octets[2] = n >> 16;
  octets[3] = n >> 24;
  move[0] = octets[0];
  move[1] = octets[1];
  move[2] = octets[2];
  move[3] = octets[3];
  octets[0] = move[3];
  octets[1] = move[2];
  octets[2] = move[1];
  octets[3] = move[0];
  write(f, octets, sizeof(int));
}
