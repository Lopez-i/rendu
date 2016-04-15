/*
** init_champ.c for init champ in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Wed Mar 23 16:27:19 2016 stanislas deneubourg
** Last update Sun Mar 27 23:38:42 2016 Loic Lopez
*/

#include "corewar.h"

void    init_champ(int fd, char *s, t_hexa *hexa, int f)
{
  while ((s = get_next_line(fd)))
    {
      if (my_strlen(s) > 0 && s != NULL)
	{
	  if (hexa->last_line == 0)
	    {
	      if (s[0] == '.' && s[1] == 'c'
		  && s[2] == 'o' && s[3] == 'd' && s[4] == 'e')
		hexa->last_line = 1;
	    }
	  hexa->pos = check_inst_1(s, hexa, f);
	  if (hexa->pos == 42)
	    my_printf("%s\n", s);
	  }
      free(s);
    }
}
