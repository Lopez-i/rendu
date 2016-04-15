/*
** get_next_line.h for get_next_line.h in /home/lopez_i/traitements/CPE_2015_getnextline
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Mon Jan  4 16:50:25 2016 Loic Lopez
** Last update Wed Mar  2 17:05:21 2016 Loic Lopez
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#ifndef GET_NEXT_LINE_
# define GET_NEXT_LINE_

#  ifndef READ_SIZE
#  define READ_SIZE (2)

# endif /* !READ_SIZE */

typedef struct	s_string
{
  char	*save;
  char	*result;

}		t_string;

char	*get_next_line(const int fd);

#endif /* !GET_NEXT_LINE_ */
