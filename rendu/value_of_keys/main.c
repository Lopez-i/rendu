/*
** main.c for test in /home/lopez_i
** 
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Fri Dec  4 16:35:43 2015 Loic Lopez
** Last update Wed Dec  9 14:51:42 2015 Loic Lopez
*/

#include <ncurses.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int n ;
  initscr();
  cbreak();
  noecho();
  while ((n = getch()) != 32) // 27 = touche echap
    {
      if (n != -1)
	{
	  printf("%d\n", n);
	}
      refresh();
    }
  endwin();
  return 0;
}
