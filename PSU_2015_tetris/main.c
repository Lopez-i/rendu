/*
** main.c for main.c in /home/jabbar_y/rendu/PSU_2015_tetris
**
** Made by Jabbari Yassir
** Login   <jabbar_y@epitech.net>
**
** Started on  Thu Feb 25 14:47:29 2016 Jabbari Yassir
<<<<<<< HEAD
** Last update Tue Mar  8 14:03:16 2016 Loic Lopez
=======
** Last update Tue Mar  8 10:38:49 2016 Jabbari Yassir
>>>>>>> b7c39779a81cbb55a93877946fdcafb79855de41
*/

#include "include/tetris.h"


void	show(t_list *list)
{
  while (list->first != 1)
    list = list->next;
  printf("%s\n", list->data->name_list);
  list = list->next;
  while (list->first != 1)
    {
      printf("%s\n", list->data->name_list);
  my_printf("%s\n", list->data->name_list);
  list = list->next;
  while (list->first != 1)
    {
      my_printf("%s\n", list->data->name_list);
>>>>>>> b7c39779a81cbb55a93877946fdcafb79855de41
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
<<<<<<< HEAD
      show(list);
=======
      tetris(list);
>>>>>>> b7c39779a81cbb55a93877946fdcafb79855de41
    }
  return (0);
}
