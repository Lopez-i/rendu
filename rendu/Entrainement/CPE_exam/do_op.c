/*
** do_op.c for do_op.c in /home/lopez_i/CPE_exam
** 
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Mon Jan  4 20:36:49 2016 Loic Lopez
** Last update Mon Jan  4 20:45:05 2016 Loic Lopez
*/

void	do_op(char *nb1, char *op, char *nb2)
{
  int	nbr1;
  int	nbr2;
  int	r;

  nbr1 = atoi(nb1);
  nbr2 = atoi(nb2);
  r = 0;
  if (op[0] == '+')
    r = nbr1 + nbr2;
  else if (op[0] == '-')
    r = nbr1 - nbr2;
  else if (op[0] == '*')
    r = nbr1 * nbr2;
  else if (op[0] == '/')
    r = nbr1 / nbr2;
  else if (op[0] == '%')
    r = nbr1 % nbr2;
  printf("%d\n", r);
}

void	main(int ac, char **av)
{
  if (ac == 4)
    do_op(av[1], av[2], av[3]);
  else
    printf("\n");
}
