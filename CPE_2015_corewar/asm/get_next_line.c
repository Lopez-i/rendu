/*
** get_next_line.c for get_next_line.c in /home/lopez_i/traitements/CPE_2015_getnextline
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Mon Jan  4 16:50:08 2016 Loic Lopez
** Last update Wed Mar 23 16:21:42 2016 stanislas deneubourg
*/

#include "get_next_line.h"

int	my_strlen(char *str)
{
  int	i;

  i = -1;
  if (str == NULL)
    return (0);
  while (str[++i]);
  return (i);
}

int	check_backslash(char *str, char c)
{
  int	i;

  if (str == NULL)
    return (-1);
  i = -1;
  while (str[++i] != '\0')
    {
      if (str[i] == c)
	return (0);
    }
  return (1);
}

char	*complete_str(char *src, char *src2)
{
  char	*str;
  int	i;
  int	n;

  i = -1;
  if ((str = malloc(sizeof(char) * my_strlen(src)
		    + my_strlen(src2) + 1)) == NULL)
    return (NULL);
  while (src[++i] != 0)
    str[i] = src[i];
  n = -1;
  while (src2[++n] != 0)
    str[i++] = src2[n];
  str[i] = '\0';
  return (str);
}

int	my_final_str(t_string *string, char *save)
{
  int	i;
  char	*final_str;

  if ((final_str =
       malloc(sizeof(char) * my_strlen(save) + 1)) == NULL
      || save == NULL)
    return (-1);
  i = 0;
  while (save[i] != '\n' && save[i] != '\0' )
    {
      final_str[i] = save[i];
      i++;
    }
  final_str[i] = '\0';
  string->save = &save[i + 1];
  string->result = final_str;
  return (1);
}

char		*get_next_line(const int fd)
{
  char		*buffer;
  static char	*save = "\0";
  char		*put_this_str;
  int		r;
  t_string	*string;

  string = malloc(sizeof(t_string));
  while (check_backslash(save, '\n') != 0)
    {
      buffer = malloc(sizeof(char) * READ_SIZE + 1);
      if ((r = read(fd, buffer, READ_SIZE)) == -1 || r == 0 || buffer == NULL)
	return (NULL);
      if (r > 0)
	buffer[r] = '\0';
      save = complete_str(save, buffer);
      if (buffer[0] == '\0')
	return (NULL);
      free(buffer);
    }
  my_final_str(string, save);
  put_this_str = string->result;
  save = string->save;
  free(string);
  return (put_this_str);
}
