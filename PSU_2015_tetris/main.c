/*
** main.c for main.c in /home/jabbar_y/rendu/PSU_2015_tetris
**
** Made by Jabbari Yassir
** Login   <jabbar_y@epitech.net>
**
** Started on  Thu Feb 25 14:47:29 2016 Jabbari Yassir
** Last update Wed Mar  9 18:15:31 2016 Loic Lopez
*/

#include "include/tetris.h"


void	show(t_list *list)
{
  int	i;

  i = 0;
  while (list->first != 1)
    list = list->next;
  while (i < list->data->height_list)
    my_putstr(list->data->tetrimino_list[i++]);
  my_putstr("\n\n");
  list = list->next;
  while (list->first != 1)
    {
      i = 0;
      while (i < list->data->height_list)
	my_putstr(list->data->tetrimino_list[i++]);
      my_putstr("\n\n");
      list = list->next;
    }
}

int		main(int ac, char **av)
{
  t_list	*list;

  list = NULL;
  (void)av;
  if (ac == 1)
    {
      list = complete_list(list);
      tetris(list);
    }
  return (0);
}
