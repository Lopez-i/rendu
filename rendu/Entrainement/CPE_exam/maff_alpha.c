/*
** maff_alpha.c for maff_alpha in /home/lopez_i/CPE_exam
** 
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Mon Jan  4 20:13:35 2016 Loic Lopez
** Last update Mon Jan  4 20:22:54 2016 Loic Lopez
*/

void	maff_alpha(char *str)
{
  int	i;

  i = 0;
  while (str[i])
   i++;
  write(1, str, i);
}
void	main()
{
  maff_alpha("aBcDeFgHiJkLmNoPqRsTuVwXyZ\n");
}
