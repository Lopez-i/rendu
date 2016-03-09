##
## Makefile<test> for Makefile in /home/lopez_i/traitements/PSU_2015_minishell1
## 
## Made by Loic Lopez
## Login   <lopez_i@epitech.net>
## 
## Started on  Thu Jan 21 19:22:39 2016 Loic Lopez
## Last update Tue Mar  1 23:37:40 2016 Loic Lopez
##

CC	=  gcc

NAME    =  tetris

ECHO	=  /bin/echo -e \

DEFAULT	=  "\033[00m"
GREEN	=  "\033[0;32m"
TEAL	=  "\033[1;36m"
RED	=  "\033[5;31m"

CFLAGS += -g # -Wextra -Wall -Werror
# CFLAGS += -pedantic -ansi
CFLAGS += -I../include
CFLAGS += -lncurses
CFLAGS += -lmy -L../lib

SRC	= debug.c

OBJ	= $(SRC:.c=.o)

all:	  $(NAME)

lib_make:
	  @make -s -C ../lib/
lib_clean:
	  @make clean -s -C ../lib/
lib_fclean:
	  @make fclean -s -C ../lib/
lib_re:
	  @make re -s -C ../lib/

$(NAME):  $(OBJ) lib_make
	  @$(CC) $(OBJ) $ $(CFLAGS) -o $(NAME) && \
	  $(ECHO) $(GREEN) "[OK]" $(TEAL) $(OBJ) $(DEFAULT) || \
	  paplay sounds/je_code.ogg
clean:	  lib_clean
	  @rm -f $(OBJ) && \
	  $(ECHO) $(GREEN) "[OK] remove" $(TEAL) $(OBJ) $(DEFAULT) || \
	  $(ECHO) $(RED) "[ERROR] doesn't exist" $(TEAL) $(OBJ) $(DEFAULT)

fclean:	  clean lib_fclean
	  @rm -f $(NAME) && \
	  $(ECHO) $(GREEN) "[OK] remove" $(TEAL) $(NAME) $(DEFAULT) || \
	  $(ECHO) $(RED) "[ERROR] doesn't exist" $(TEAL) $(OBJ) $(DEFAULT)

re:	  fclean all lib_re

.c.o:
	 @$(CC) $(CFLAGS) -c $< -o $@ && \
	 $(ECHO) $(GREEN) "[OK]" $(TEAL) $^ $(DEFAULT) || \
	 $(ECHO) $(RED) "[ERROR] doesn't exist" $(TEAL) $^ $(DEFAULT)

.PHONY:   all clean fclean re
