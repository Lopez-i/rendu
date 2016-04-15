/*
** pars.c for pars.c in /home/lopez_i/traitements/CPE_2015_corewar/asm
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sun Mar 27 23:09:51 2016 Loic Lopez
** Last update Sun Mar 27 23:23:48 2016 Loic Lopez
*/

#include "corewar.h"

void	two_args(char **arg, int f, int check)
{
  int	print;
  int	binaire;
  int	reg;
  unsigned char c;

  c = 0x01;
  if (arg[0][0] >= '0' && arg[0][0] <= '9')
    {
      print = my_getnbr(&arg[0][1]);
      binaire = my_getnbr_base("11010000", "01");
      write(f, &binaire, 1);
      write(f, &print, 1);
      write(f, &c, 1);
    }
  else if (arg[0][0] < '0' && arg[0][0] > '9')
    check++;
  if (check == 2)
    exit(0);
  reg = my_getnbr(&arg[1][1]);
  write(f, &reg, 1);
}

void	max_args(char **arg, int f, int print)
{
  int	binaire;
  int	reg;

  if (arg[0][0] == 'r' && arg[1][0] == DIRECT_CHAR)
    {
      print = my_getnbr(&arg[1][1]);
      binaire = my_getnbr_base("01100100", "01");
      reg = my_getnbr(&arg[0][1]);
      write(f, &binaire, 1);
      write(f, &reg, 4);
      write(f, &print, 1);
      reg = my_getnbr(&arg[2][1]);
      write(f, &reg, 1);
    }
  if (arg[0][0] == 'r' && arg[1][0] >= '0' && arg[1][0] <= '9')
    {
      print = my_getnbr(&arg[1][0]);
      binaire = my_getnbr_base("01110100", "01");
      reg = my_getnbr(&arg[0][1]);
      write(f, &binaire, 1);
      write(f, &reg, 2);
      write(f, &print, 1);
      reg = my_getnbr(&arg[2][1]);
      write(f, &reg, 1);
    }
}

void	max_args2(char **arg, int f, int print)
{
  int	reg;
  int	binaire;

  if (arg[0][0] == DIRECT_CHAR && arg[1][0] == 'r' && arg[2][0] == 'r')
    {
      print = my_getnbr(&arg[0][1]);
      binaire = my_getnbr_base("10010100", "01");
      write(f, &binaire, 4);
      write(f, &print, 1);
      reg = my_getnbr(&arg[1][1]);
      write(f, &reg, 1);
      reg = my_getnbr(&arg[2][1]);
      write(f, &reg, 1);
    }
  if (arg[0][0] == DIRECT_CHAR && arg[1][0] == DIRECT_CHAR)
    {
      binaire = my_getnbr_base("10100100", "01");
      write(f, &binaire, 3);
    }
}

void	max_args3(char **arg, int f, int print)
{
  int	reg;
  int	binaire;

  if (arg[0][0] == DIRECT_CHAR && arg[1][0] >= '0' && arg[1][0] <= '9')
    {
      print = my_getnbr(&arg[0][1]);
      binaire = my_getnbr_base("10110100", "01");
      reg = my_getnbr(&arg[2][1]);
      write(f, &binaire, 4);
      write(f, &print, 2);
      print = my_getnbr(&arg[1][0]);
      write(f, &print, 1);
      write(f, &reg, 1);
    }
  if (arg[0][0] >= '0' && arg[0][0] <= '9' && arg[1][0] == 'r' && arg[2][0] == 'r')
    {
      print = my_getnbr(&arg[0][0]);
      binaire = my_getnbr_base("11010100", "01");
      write(f, &binaire, 2);
      write(f, &print, 1);
      reg = my_getnbr(&arg[1][1]);
      write(f, &reg, 1);
      reg = my_getnbr(&arg[2][1]);
      write(f, &reg, 1);
    }
}

void	max_args4(char **arg, int f, int print)
{
  int	reg;
  int	binaire;

   if (arg[0][0] >= '0' && arg[0][0] <= '9' && arg[1][0] == DIRECT_CHAR)
    {
      print = my_getnbr(&arg[0][0]);
      binaire = my_getnbr_base("11100100", "01");
      reg = my_getnbr(&arg[2][1]);
      write(f, &binaire, 2);
      write(f, &print, 4);
      print = my_getnbr(&arg[1][1]);
      write(f, &print, 1);
      write(f, &reg, 1);
    }
  if (arg[0][0] >= '0' && arg[0][0] <= '9' && arg[1][0] >= '0' && arg[1][0] <= '9')
    {
      print = my_getnbr(&arg[0][0]);
      binaire = my_getnbr_base("11110100", "01");
      reg = my_getnbr(&arg[2][1]);
      write(f, &binaire, 2);
      write(f, &print, 2);
      print = my_getnbr(&arg[1][0]);
      write(f, &print, 1);
      write(f, &reg, 1);
    }
}
