/*
** my.h for my.h in /home/jabbar_y/rendu/CPE_2015_corewar/corewar
**
** Made by Jabbari Yassir
** Login   <jabbar_y@epitech.net>
**
** Started on  Tue Mar 22 13:15:56 2016 Jabbari Yassir
** Last update Sun Mar 27 23:36:52 2016 Loic Lopez
*/

#define _MY_H_
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "get_next_line.h"
#include "op.h"

#define SYNTAX_ERROR "Syntax error line "

typedef struct s_hexa
{
  unsigned	char value[17];
  char		*name[17];
  int		pos;
  int		last_line;
  char		*name_prog;
  char		*comment;
}		t_hexa;

int			my_printf(const char *format, ...);
char			**my_str_to_wordtab(char *str, char c);
int			my_getnbr(char *str);
unsigned char		*my_swap_number(unsigned char *s);
int			my_strcmp(char *, char *);
int			my_strncmp(char *, char *, int);
int			my_strlen(char *);
int			check_header(char *str, int i);
int			check_inst_1(char *s, t_hexa *hexa, int f);
int			check_space(char *str);
int			init_start(int fd, int f, t_hexa *hexa, header_t *header);
int			main(int ac, char **argv);
int			my_final_str(t_string *string, char *save);
int			my_strlen(char *str);
int			remove_start(char *s);
char			*replace_quotes(char *str);
void			init_champ(int fd, char *s, t_hexa *hexa, int f);
void			init_hexa_names(t_hexa *hexa);
void			init_hexa_values(t_hexa *hexa);
char			*check_header_comment(char *s, int i);
char			*check_header_name(char *s, int i);
char			*my_strdup(char *);
unsigned char		check_inst2(char *);
int			det_prog_size(char *);
void			writing_magic(int, int);
void		        writing_2_octets(int f, int n);
void			writing_basic(int, int);
int			my_getnbr_base(char *, char *);
void			two_args(char **arg, int f, int check);
void			max_args(char **arg, int f, int print);
void			max_args2(char **arg, int f, int print);
void			max_args3(char **arg, int f, int print);
void			max_args4(char **arg, int f, int print);
void			rest_contribute(char **arg, int f, int print);
void			rest_contribute2(char **arg, int f, int print);
void			epur_contribute(char **arg, int f, int print);
void			epur_contribute2(char **arg, int f, int print);
void			epur_one_dir(char *arg, int f);
void			epur_two_args1(char **arg, int f);
void			epur_two_args2(char **arg, int f);
void			epur_aff(char *arg, int f);
void			epur_sti(char **arg, int f);
