/*
** interface.c for interface in /home/jabbar_y/rendu/PSU_2015_tetris
**
** Made by Jabbari Yassir
** Login   <jabbar_y@epitech.net>
**
** Started on  Fri Feb 26 15:57:09 2016 Jabbari Yassir
** Last update Tue Mar  8 10:27:47 2016 Jabbari Yassir
*/

#include "../include/tetris.h"

void            print_logo(t_list *list)
{
  start_color();
  init_color(0, 0, 0, 0);
  init_pair(1, COLOR_RED, COLOR_BLACK);
  attron(COLOR_PAIR(COLOR_RED));
  mvprintw(1, 1, "***");
  mvprintw(2, 2, "*\n  *\n  *\n  *\n");
  init_pair(4, COLOR_BLUE, COLOR_BLACK);
  attron(COLOR_PAIR(COLOR_BLUE));
  mvprintw(1, 5, "***");
  mvprintw(2, 5, "*");
  mvprintw(3, 5, "**");
  mvprintw(4, 5, "*");
  mvprintw(5, 5, "***");
  init_pair(3, COLOR_YELLOW, COLOR_BLACK);
  attron(COLOR_PAIR(COLOR_YELLOW));
  mvprintw(1, 9, "***");
  mvprintw(2, 9, " *");
  mvprintw(3, 9, " *");
  mvprintw(4, 9, " *");
  mvprintw(5, 9, " *");
  init_pair(2, COLOR_GREEN, COLOR_BLACK);
  attron(COLOR_PAIR(COLOR_GREEN));
  mvprintw(1, 13, "***");
  mvprintw(2, 13, "* *");
  print_logo_bis(list);
}

void		print_logo_bis(t_list *list)
{
  mvprintw(3, 13, " **");
  mvprintw(4, 13, "* *");
  mvprintw(5, 13, "* *");
  init_pair(4, COLOR_BLUE, COLOR_BLACK);
  attron(COLOR_PAIR(COLOR_BLUE));
  mvprintw(1, 17, "*");
  mvprintw(3, 17, "*");
  mvprintw(4, 17, "*");
  mvprintw(5, 17, "*");
  init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
  attron(COLOR_PAIR(COLOR_MAGENTA));
  mvprintw(1, 19, "***");
  mvprintw(2, 19, "*");
  mvprintw(3, 19, "***");
  mvprintw(4, 19, "  *");
  mvprintw(5, 19, "***");
  print_game_board(list);
}

void		print_game_board(t_list *list)
{
  int		i;

  i = 2;
  init_pair(7, COLOR_WHITE, COLOR_BLACK);
  attron(COLOR_PAIR(COLOR_WHITE));
  mvprintw(1, 23, "------------");
  init_pair(2, COLOR_GREEN, COLOR_BLACK);
  attron(COLOR_PAIR(COLOR_GREEN));
  while (i != 22)
    mvprintw(i++, 23, "|          |");
  init_pair(7, COLOR_WHITE, COLOR_BLACK);
  attron(COLOR_PAIR(COLOR_WHITE));
  mvprintw(22, 23, "------------");
  mvprintw(1, 38, "/NEXT--\\");
  mvprintw(2, 38, "|      |");
  mvprintw(3, 38, "|      |");
  mvprintw(4, 38, "|      |");
  mvprintw(5, 38, "\\------/");
  mvprintw(8, 1, "/------------------\\");
  i = 9;
  while (i != 18)
    mvprintw(i++, 1, "|                  |");
  mvprintw(i, 1, "\\------------------/");
  mvprintw(10, 3, "High Score");
  print_game_board_bis(list);
}

void		print_game_board_bis(t_list *list)
{
  mvprintw(11, 3, "Score");
  mvprintw(13, 3, "Lines");
  mvprintw(14, 3, "Level");
  mvprintw(16, 3, "Timer:");
  mvprintw(22, 1, "EpiTetris (c) - 2016");
  mvprintw(20, 38, "Develloped with <3");
  mvprintw(21, 38, "lopez_i, (Le Mafieux)");
  mvprintw(22, 38, "jabbar_y, (L'Esclavagiste)");
  print_tetrimino(list);
}
