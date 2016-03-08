##
## Makefile for Makefile in /home/jabbar_y/rendu/PSU_2015_tetris
## 
## Made by Jabbari Yassir
## Login   <jabbar_y@epitech.net>
## 
## Started on  Fri Mar  4 13:49:36 2016 Jabbari Yassir
## Last update Tue Mar  8 14:02:39 2016 Loic Lopez

CC	=  gcc -g

NAME    =  tetris

ECHO	=  /bin/echo -e \

DEFAULT	=  "\033[00m"
GREEN	=  "\033[0;32m"
TEAL	=  "\033[1;36m"
RED	=  "\033[5;31m"

CFLAGS += -g -Wextra -Wall -Werror
CFLAGS += -pedantic -ansi
CFLAGS += -I./include/
CFLAGS += -lncurses
CFLAGS += -lmy -L./lib/
CFLAGS += -D_BSD_SOURCE
CFLAGS += -D_XOPEN_SOURCE

SRC	=  main.c			\
	   interface/tetris.c		\
	   interface/interface.c	\
	   size.c			\
	   manage_list.c		

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
