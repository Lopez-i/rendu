
/*
** tetris.c for tetris in /home/jabbar_y/rendu/PSU_2015_tetris
**
** Made by Jabbari Yassir
** Login   <jabbar_y@epitech.net>
**
** Started on  Thu Feb 25 14:57:02 2016 Jabbari Yassir
** Last update Tue Mar  8 12:27:27 2016 Jabbari Yassir
*/

#include "../include/tetris.h"

int		tetris(t_list *list)
{
  int		key;

  initscr();
  noecho();
  keypad(stdscr, TRUE);
  curs_set(0);
  while (key != 'q')
    {
      clear();
      /* print_logo(list); */
      print_tetrimino(list);
      key = getch();
      refresh();
    }
  endwin();
  return (0);
}

void		print_tetrimino(t_list *list)
{
  /* int		i; */
  /* int		j; */
  /* int		x; */
  /* int		y; */

  /* y = 2; */
  /* x = 28; */
  /* j = 0; */
  while (list->first != 1)
    list = list->next;
  mvaddstr(3, 20, list->data->name_list);
  /* while (j < list->data->height_list) */
  /*   { */
  /*     i = 0; */
  /*     while (i <= list->data->width_list) */
  /* 	mvprintw(y, x++, "%c", list->data->tetrimino_list[j][i++]); */
  /*     j++; */
  /*   } */
}
