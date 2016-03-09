/*
** tetris.h for tetris in /home/jabbar_y/rendu/PSU_2015_tetris/include
**
** Made by Jabbari Yassir
** Login   <jabbar_y@epitech.net>
**
** Started on  Thu Feb 25 15:10:48 2016 Jabbari Yassir
** Last update Tue Mar  8 22:32:17 2016 Jabbari Yassir
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <dirent.h>
#include <fcntl.h>
#include <unistd.h>
#include <ncurses.h>
#ifndef _TETRIS_H_
#define _TETRIS_H_

typedef	struct		s_tmp
{
  int			color_tmp;
  int			width_tmp;
  int			height_tmp;
  char			**tetrimino_tmp;
  char			*name_tmp;
  int			size;
  int			fd;
  int			rd;
  char			*buffer;

}			t_tmp;

typedef	struct		s_data
{
  int			color_list;
  int			width_list;
  int			height_list;
  char			**tetrimino_list;
  char			*name_list;
}			t_data;

typedef struct		s_list
{
  struct s_list		*prev;
  struct s_list		*next;
  int			first;
  t_data		*data;
}			t_list;

int			tetris(t_list *list);
int			my_putchar(char c);
void			print_logo();
int			my_putstr(char *);
void			print_logo_bis();
void			print_game_board();
void			print_game_board_bis();
char			**my_str_to_wordtab(char *str, char c);
t_list			*add(t_list *list, t_tmp *);
t_list			*complete_list(t_list *);
int			my_getnbr(char *str);
int			size_of_file(const int fd);
int			my_printf(const char *, ...);
void			print_tetrimino(t_list *);
void			show(t_list *);
char			*my_strdup(char *src);
char			*my_strcpy(char *, char *);

#endif /* _TETRIS_H_ */
