/*
** rev_str.c for rev_str.c in /home/lopez_i/CPE_exam
** 
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Mon Jan  4 20:47:11 2016 Loic Lopez
** Last update Thu Jan  7 20:19:20 2016 Loic Lopez
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	rev_str(char *str)
{
  int	count;

  count = 0;
  while (str[count])
    count++;
  while (count > 0)
    {
      count--;
      my_putchar(str[count]);
    }
}

void	main(int ac, char **av)
{
  if (ac > 1)
    rev_str(av[1]);
  my_putchar('\n');
}
