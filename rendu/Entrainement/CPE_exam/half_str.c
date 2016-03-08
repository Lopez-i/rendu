/*
** half_str.c for half_str.c in /home/lopez_i/Entrainement/CPE_exam
** 
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Thu Jan  7 13:03:39 2016 Loic Lopez
** Last update Thu Jan  7 13:07:08 2016 Loic Lopez
*/

void	half_str(char *str)
{
  int	i;

  i = -1;
  while (str[++i])
    {
      if (i % 2 == 0)
	printf("%c", str[i]);
    }
  printf("\n");
}

void	main(int ac, char **av)
{
  int	i;

  i = 0;
  while (++i < ac)
    half_str(av[i]);
  if (ac <= -1)
    printf("\n");
}
