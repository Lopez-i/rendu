/*
** check_inst1.c for check inst1 in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Wed Mar 23 16:23:59 2016 stanislas deneubourg
** Last update Sun Mar 27 23:38:02 2016 Loic Lopez
*/

#include "corewar.h"

void	epur_three_regs(char **arg, int f)
{
  int binaire;
  int	reg;

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
}

void	epur_max_args(char **arg, int f)
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
  max_args(arg, f, print);
  max_args2(arg, f, print);
  max_args3(arg, f, print);
  max_args4(arg, f, print);
}

void	epur_rest(char **arg, int f)
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
  rest_contribute(arg, f, print);
  if (arg[0][0] == DIRECT_CHAR && arg[1][0] == DIRECT_CHAR)
    {
      binaire = my_getnbr_base("10100100", "01");
      write(f, &binaire, 3);
    }
  rest_contribute2(arg, f, print);
}

void	separe_arguments(char **tab, unsigned char ret, int f)
{
  if (ret == 1 || ret == 9 || ret == 12 || ret == 15)
    epur_one_dir(tab[0], f);
  if (ret == 16)
    epur_aff(tab[0], f);
  if (ret == 2 || ret == 13)
    epur_two_args1(tab, f);
  if (ret == 3)
    epur_two_args2(tab, f);
  if (ret == 4 || ret == 5)
    epur_three_regs(tab, f);
  if (ret == 6 || ret == 7 || ret == 8)
    epur_max_args(tab, f);
  if (ret == 10 || ret == 14)
    epur_rest(tab, f);
  if (ret == 11)
    epur_sti(tab, f);
}

int     check_inst_1(char *s, t_hexa *hexa, int f)
{
  char  **tab;
  char	**tab2;
  unsigned char	ret;

  if (hexa->last_line != 0)
    return (42);
  if ((tab = my_str_to_wordtab(s, ' ')) == NULL)
    exit(0);
  else if (tab != NULL)
    ret = check_inst2(tab[0]);
  if ((tab2 = my_str_to_wordtab(&tab[1][0], SEPARATOR_CHAR)) == NULL)
    exit(0);
  write(f, &ret, sizeof(char));
  separe_arguments(tab2, ret, f);
  free(tab);
  free(tab2);
  return (-1);
}
