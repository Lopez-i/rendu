/*
** contribute_pars.c for contribute_pars.c in /home/lopez_i/traitements/CPE_2015_corewar/asm
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sun Mar 27 23:10:08 2016 Loic Lopez
** Last update Sun Mar 27 23:38:16 2016 Loic Lopez
*/

#include "corewar.h"

void	rest_contribute(char **arg, int f, int print)
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
}

void	rest_contribute2(char **arg, int f, int print)
{
  int	binaire;
  int	reg;

  if (arg[0][0] == DIRECT_CHAR && arg[1][0] >= '0' && arg[1][0] <= '9')
    {
      print = my_getnbr(&arg[0][1]);
      binaire = my_getnbr_base("10110100", "01");
      reg = my_getnbr(&arg[2][1]);
      write(f, &binaire, 1);
      write(f, &print, 2);
      print = my_getnbr(&arg[1][0]);
      write(f, &print, 1);
      write(f, &reg, 1);
    }
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
}

void	epur_contribute(char **arg, int f, int print)
{
  int	binaire;
  int	reg;

  if (arg[1][0] == 'r' && arg[2][0] == DIRECT_CHAR)
    {
      print = my_getnbr(&arg[2][1]);
      binaire = my_getnbr_base("01011000", "01");
      reg = my_getnbr(&arg[0][1]);
      write(f, &binaire, 1);
      write(f, &reg, 4);
      reg = my_getnbr(&arg[1][1]);
      write(f, &reg, 1);
      write(f, &print, 1);
    }
  if (arg[1][0] == DIRECT_CHAR && arg[2][0] == 'r')
    {
      print = my_getnbr(&arg[1][1]);
      binaire = my_getnbr_base("01100100", "01");
      write(f, &binaire, 1);
      reg = my_getnbr(&arg[0][1]);
      write(f, &reg, 1);
      write(f, &print, 1);
      reg = my_getnbr(&arg[2][1]);
      write(f, &reg, 1);
    }
}

void	epur_contribute2(char **arg, int f, int print)
{
  int	binaire;
  int	reg;

   if (arg[1][0] >= '0' && arg[0][0] <= '9' && arg[2][0] == DIRECT_CHAR)
    {
      print = my_getnbr(&arg[1][0]);
      binaire = my_getnbr_base("01111000", "01");
      reg = my_getnbr(&arg[0][1]);
      write(f, &binaire, 2);
      write(f, &reg, 4);
      write(f, &print, 1);
      print = my_getnbr(&arg[2][1]);
      write(f, &print, 1);
    }
    if (arg[1][0] >= '0' && arg[0][0] <= '9' && arg[2][0] == 'r')
    {
      print = my_getnbr(&arg[1][0]);
      binaire = my_getnbr_base("01110100", "01");
      reg = my_getnbr(&arg[0][1]);
      write(f, &binaire, 1);
      write(f, &reg, 4);
      write(f, &print, 1);
      reg = my_getnbr(&arg[2][1]);
      write(f, &reg, 1);
    }
}
