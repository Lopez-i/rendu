/*
** rotone.c for rotone.c in /home/lopez_i/CPE_exam
** 
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Mon Jan  4 20:29:04 2016 Loic Lopez
** Last update Fri Jan  8 08:24:17 2016 Loic Lopez
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	rotone(char *str)
{
  int	i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	my_putchar('a' + ((str[i] - 'a' + 1) % 26));
      else if (str[i] >= 'A' && str[i] <= 'Z')
	my_putchar('A' + ((str[i] - 'A' + 1) % 26));
      else
	my_putchar(str[i]);
    }
}

void	main(int ac, char **av)
{
  if (ac > 1)
    rotone(av[1]);
  my_putchar('\n');
}
