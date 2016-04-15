##
## Makefile for Makefile in /home/jabbar_y/rendu/PSU_2015_tetris
## 
## Made by Jabbari Yassir
## Login   <jabbar_y@epitech.net>
## 
## Started on  Fri Mar  4 13:49:36 2016 Jabbari Yassir
## Last update Thu Mar 31 16:10:20 2016 Loic Lopez
##

CC	=  gcc

NAME    =  asm

ECHO	=  /bin/echo -e \

DEFAULT	=  "\033[00m"
GREEN	=  "\033[0;32m"
TEAL	=  "\033[1;36m"
RED	=  "\033[5;31m"

CFLAGS += -g -Wextra -Wall -Werror
CFLAGS += -pedantic -ansi
CFLAGS += -I../include/
CFLAGS += -lmy -L./lib/
CFLAGS += -D_BSD_SOURCE
CFLAGS += -D_XOPEN_SOURCE

SRC	= 	check_header.c		\
		check_inst1.c		\
		check_inst2.c		\
		check_space.c		\
		det_prog_size.c		\
		get_next_line.c		\
		init_champ.c		\
	   	init_hexa_names.c	\
		init_hexa_values.c 	\
		init_start.c		\
		main.c 			\
		op.c			\
	   	remove_spaces.c		\
	   	remove_start.c		\
		replace_quotes.c	\
		revert.c		\
		pars.c			\
		contribute_pars.c	\
		check_inst1_contribute.c\
		my_getnbr_base.c	

OBJ	= $(SRC:.c=.o)

all: lib_make  $(NAME)

$(NAME):  $(OBJ)
	  @$(CC) -o $(NAME) $(OBJ) $(CFLAGS) && \
	  $(ECHO) $(GREEN) "[OK]" $(TEAL) $(OBJ) $(DEFAULT) || \
	  paplay sounds/je_code.ogg

lib_make: 
	  @make --no-print-directory -C lib/
lib_clean:
	  @make clean --no-print-directory -C lib/
lib_fclean:
	  @make fclean --no-print-directory -C lib/
lib_re:
	  @make re --no-print-directory -C lib/

clean:	  lib_clean
	  @rm -f $(OBJ) && \
	  $(ECHO) $(GREEN) "[OK] remove" $(TEAL) $(OBJ) $(DEFAULT) || \
	  $(ECHO) $(RED) "[ERROR] doesn't exist" $(TEAL) $(OBJ) $(DEFAULT)

fclean:	  clean lib_fclean
	  @rm -f $(NAME) && \
	  $(ECHO) $(GREEN) "[OK] remove" $(TEAL) $(NAME) $(DEFAULT) || \
	  $(ECHO) $(RED) "[ERROR] doesn't exist" $(TEAL) $(OBJ) $(DEFAULT)

re:	  fclean all

.c.o:
	 @$(CC) $(CFLAGS) -c $< -o $@ && \
	 $(ECHO) $(GREEN) "[OK]" $(TEAL) $^ $(DEFAULT) || \
	 $(ECHO) $(RED) "[ERROR] doesn't exist" $(TEAL) $^ $(DEFAULT)

.PHONY:   all clean fclean re
