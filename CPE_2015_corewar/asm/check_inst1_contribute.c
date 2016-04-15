/*
** check_inst1_contribute.c for check_inst1_contribute.c in /home/lopez_i/traitements/CPE_2015_corewar/asm
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sun Mar 27 23:33:35 2016 Loic Lopez
** Last update Sun Mar 27 23:36:54 2016 Loic Lopez
*/

#include "corewar.h"

void	epur_one_dir(char *arg, int f)
{
  int	print;

  if (arg[0] != DIRECT_CHAR)
    exit(0);
  print = my_getnbr(&arg[1]);
  writing_basic(f, print);
}

void	epur_two_args1(char **arg, int f)
{
  int	check;
  int	print;
  int	binaire;

  check = 0;
  if (arg[0][0] == DIRECT_CHAR)
    {
      print = my_getnbr(&arg[0][1]);
      binaire = my_getnbr_base("10010000", "01");
      write(f, &binaire, 1);
      writing_basic(f, print);
    }
  else if (arg[0][0] != DIRECT_CHAR)
    check++;
  two_args(arg, f, check);
}
void	epur_two_args2(char **arg, int f)
{
  int	print;
  int	reg;
  int	binaire;
  unsigned char c;

  c = 0x01;
  if (arg[1][0] >= '0' && arg[1][0] <= '9')
    {
      print = my_getnbr(&arg[1][1]);
      binaire = my_getnbr_base("01110000", "01");
      write(f, &binaire, 1);
      write(f, &c, 1);
      reg = my_getnbr(&arg[0][1]);
      write(f, &print, 1);
      write(f, &reg, 1);
    }
  else if (arg[1][0] == 'r')
    {
      binaire = my_getnbr_base("01010000", "01");
      reg = my_getnbr(&arg[0][1]);
      write(f, &binaire, 1);
      write(f, &reg, 1);
      reg = my_getnbr(&arg[1][1]);
      write(f, &reg, 1);
    }
}

void	epur_aff(char *arg, int f)
{
  int   reg;
  int	binaire;
  unsigned char c;

  c = 0x01;
  binaire =  my_getnbr_base("01000000", "01");
  write(f, &binaire, 1);
  write(f, &c, 1);
  reg = my_getnbr(&arg[1]);
  write(f, &reg, 1);
}

void	epur_sti(char **arg, int f)
{
  int	binaire;
  int	reg;
  int	print;

  print = 0;
  if (arg[0][0] == 'r' && arg[1][0] == 'r' && arg[2][0] == 'r')
    {
      binaire = my_getnbr_base("01010100", "01");
      reg = my_getnbr(&arg[0][1]);
      write(f, &binaire, 1);
      write(f, &reg, 1);
      reg = my_getnbr(&arg[1][1]);
      write(f, &reg, 1);
      reg = my_getnbr(&arg[2][1]);
      write(f, &reg, 1);
    }
  epur_contribute(arg, f, print);
  if (arg[1][0] == DIRECT_CHAR && arg[2][0] == DIRECT_CHAR)
    {
      binaire = my_getnbr_base("01101000", "01");
      write(f, &binaire, 3);
    }
  epur_contribute2(arg, f, print);
}
