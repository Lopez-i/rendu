/*
** epur_str.c for epur_str.c in /home/lopez_i/Entrainement/CPE_exam
** 
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Thu Jan  7 12:50:13 2016 Loic Lopez
** Last update Thu Jan  7 12:56:28 2016 Loic Lopez
*/

void	epur_str(char *str)
{
  char	c;
  int	i;

  c = -1;
  i = -1;
  while (str[++i])
    {
      if (str[i] != ' ' && str[i] != '\t')
	{
	  if (c == 1)
	    printf("%c", ' ');
	  c = 0;
	  printf("%c", str[i]);
	}
      else if (c == 0)
	c = 1;
    }
}

int	main(int ac, char **av)
{
  epur_str(av[1]);
}
