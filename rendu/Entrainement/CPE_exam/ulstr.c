/*
** ulstr.c for ulstr.c in /home/lopez_i/CPE_exam
** 
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Mon Jan  4 20:54:57 2016 Loic Lopez
** Last update Mon Jan  4 20:59:43 2016 Loic Lopez
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	ulstr(char *str)
{
  int	i;

  i = -1;
  while (str[++i])
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	my_putchar(str[i] - ('a'- 'A'));
      else if (str[i] >= 'A' && str[i] <= 'Z')
	my_putchar (str[i] - ('A' - 'a'));
      else
	my_putchar(str[i]);
    }
  my_putchar('\n');
}

void	main(int ac, char **av)
{
  ulstr(av[1]);
}
