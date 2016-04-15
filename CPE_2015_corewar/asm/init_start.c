/*
** init_start.c for init start in /home/deneub_s/CPE_2015_corewar/asm
**
** Made by stanislas deneubourg
** Login   <deneub_s@epitech.net>
**
** Started on  Wed Mar 23 16:27:38 2016 stanislas deneubourg
** Last update Sun Mar 27 23:43:42 2016 Loic Lopez
*/

#include "corewar.h"

header_t	*my_swap(char *src, header_t *header)
{
  int		i;

  i = 0;
  while (src[i] != '\0')
    {
      header->prog_name[i] = src[i];
      i++;
    }
  return (header);
}

header_t	*my_swap2(char *src, header_t *header)
{
  int		i;

  i = 0;
  while (src[i] != '\0')
    {
      header->comment[i] = src[i];
      i++;
    }
  while (i < 2049)
    {
      header->comment[i] = 0;
      i++;
    }
  return (header);
}

void	check_valid_header(char *str, int i)
{
  if (str == NULL)
    {
      my_printf("%s%i%c\n", SYNTAX_ERROR, i, '.');
      return ;
    }
}

void	init_start2(int i, header_t *header, t_hexa *hexa, char *s, int f)
{
  if (i == 1)
    {
      hexa->comment = check_header_comment(s, 2);
      check_valid_header(hexa->comment, 2);
      hexa->comment = replace_quotes(hexa->comment);
      my_swap2(hexa->comment, header);
      free(hexa->comment);
      write(f, header->comment, 2049 + 3);
    }
}

int     init_start(int fd, int f, t_hexa *hexa, header_t *header)
{
  char  *s;
  int	i;

  i = 0;
  while ((s = get_next_line(fd)))
    {
      if (i == 0)
	{
	  hexa->name_prog = check_header_name(s, 1);
	  check_valid_header(hexa->name_prog, 1);
	  hexa->name_prog = replace_quotes(hexa->name_prog);
	  my_swap(hexa->name_prog, header);
	  free(hexa->name_prog);
	  write(f, header->prog_name, 129 + 3);
	  writing_basic(f, header->prog_size);
	}
      else if (i > 1)
	init_champ(fd, s, hexa, f);
      init_start2(i, header, hexa, s, f);
      i++;
      free(s);
    }
  return (0);
}
