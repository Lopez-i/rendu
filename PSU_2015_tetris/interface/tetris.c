/*
** tetris.c for tetris in /home/jabbar_y/rendu/PSU_2015_tetris
**
** Made by Jabbari Yassir
** Login   <jabbar_y@epitech.net>
**
** Started on  Thu Feb 25 14:57:02 2016 Jabbari Yassir
** Last update Wed Mar  9 19:22:39 2016 Jabbari Yassir
*/

#include "../include/tetris.h"

void		print_tetrimino(t_list *list)
{
  int		i;
  int		y;
  int		x;
  WINDOW	*win;

  i = 0;
  y = 0;
  x = 3;
  win = subwin(stdscr, 20, 10, 2, 24);
  while (list->first != 1)
    list = list->next;
  list = list->next;
  mvprintw(50, 0, list->data->name_list);
  mvwprintw(win, y++, x, list->data->tetrimino_list[i++]);
  mvwprintw(win, y, x, list->data->tetrimino_list[i++]);
  while (y != 19)
    {
      i = 0;
      usleep(50000);
      refresh();
      mvwprintw(win, y, x, " ");
      mvwprintw(win, y++, x, list->data->tetrimino_list[i++]);
      mvwprintw(win, y, x, list->data->tetrimino_list[i++]);
    }
}

int		tetris(t_list *list)
{
  int		key;

  newterm(NULL, stderr, stdin);
  noecho();
  curs_set(0);
  nodelay(stdscr, TRUE);
  keypad(stdscr, TRUE);
  while (key != 'q')
    {
      clear();
      print_logo();
      print_tetrimino(list);
      refresh();
      key = getch();
    }
  endwin();
  return (0);
}
