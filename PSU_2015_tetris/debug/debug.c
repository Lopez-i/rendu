/*
** debug.c for debug.c in /home/lopez_i/traitements/PSU_2015_tetris
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Tue Mar  1 22:39:14 2016 Loic Lopez
** Last update Tue Mar  8 10:50:37 2016 Loic Lopez
*/

#include "../include/tetris.h"
#include "../lib/include/my.h"

void	print_help(void)
{
  my_printf("Usage: ./tetris [options]\n");
  my_printf("Options:\n --help\t\t\t Display this help\n");
  my_printf(" -l --level={num}\t Start Tetris at level num\n");
  my_printf(" -kl --key-left={K}\t Move tetrimino on LEFT with key K\n");
  my_printf(" -kr --key-right={K}\t Move tetrimino on RIGHT with key K\n");
  my_printf(" -kt --key-turn={K}\t Turn tetrimino with key K\n");
  my_printf(" -kd --key-drop={K}\t Set default DROP on key K\n");
  my_printf(" -kq --key-quit={K}\t Quit program when press key K\n");
  my_printf(" -kp --key-pause={K}\t Pause and restart game when press key K\n");
  my_printf(" --map-size={row,col}\t Set game size at row, col\n");
  my_printf(" -w --without-next\t Hide next tetrimino\n");
  my_printf(" -d --debug\t\t Debug mode\n");
}

void    check_tetrimino(int fd)
{
  char  *buffer;
  int   height;
  int   width;
  int   color;
  int   i;

  i = -1;
  if ((buffer = malloc(sizeof(char) * 4096)) == NULL)
    return ;
  read(fd, buffer, 4096);
  height = my_getnbr(&buffer[0]);
  width = my_getnbr(&buffer[2]);
  color = my_getnbr(&buffer[4]);
  my_printf(" : Size %d*%d : Color %d\n", height, width, color);
  while (buffer[++i] != '\n');
  i++;
  while (buffer[i])
    my_putchar(buffer[i++]);
  close(fd);
}

void	help(char **av)
{
  int	i;
  int	n;

  i = 0;
  n = -1;
  while (av[++i])
    {
      while (av[i][++n] != my_strcmp(av[i], "--help"))
	{
	  if (av[i][n] == '-' && av[i][n + 1] == '-' && av[i][n + 2] == 'h'
	      && av[i][n + 3] == 'e' && av[i][n + 4] == 'l' && av[i][n + 5] == 'p')
	    {
	      print_help();
	    }
	  else
	    return ;
	}
    }
}

void	print_debug(char **av, int i, int n)
{
   while (av[i])
    {
      n = 0;
      while (av[i][n] != my_strcmp(av[i], "–d"))
	{
	  if (av[i][n] == '-' && av[i][n + 1] == 'd')
	    my_printf("*** DEBUG MODE ***\n");
	  else
	    return ;
	  n++;
	}
      i++;
    }
}

void	kd(char **av, int i, int n)
{
  while (av[i])
    {
      while (av[i][n] != my_strcmp(av[i], "–kd"))
	{
	  if (av[i][n] == '-' && av[i][n + 1] == 'k' && av[i][n + 2] == 'd')
	    my_printf("Key Drop : x\n");
	  else
	    return ;
	  n++;
	}
      i++;
    }
}

int     main(int ac, char **av)
{
  int	i;
  int	n;

  if (ac < 2)
    my_putstr("Le jeu est en PLS\n");
  if (ac > 2)
    {
      i = 1;
      n = 0;
      kd(av, i, n);
      print_debug(av, i, n);
    }
  else if (ac == 2)
    help(av);
  return (0);
}

      /* else */
      /* 	{ */
      /* 	  i = 0; */
      /* 	  while (av[++i]) */
      /* 	    { */
      /* 	      my_printf("Tetriminos : Name "); */
      /* 	      n = 0; */
      /* 	      while (av[i][n] != '.') */
      /* 		{ */
      /* 		  c = av[i][n]; */
      /* 		  my_putchar(c); */
      /* 		  n++; */
      /* 		} */
      /* 	      fd = open(av[i], O_RDONLY); */
      /* 	      check_tetrimino(fd); */
      /* 	    } */
      /* 	} */
