/*
** manage_list.c for manage_list in /home/jabbar_y/rendu/test/PSU_2015_tetris
**
** Made by jabbar_y
** Login   <jabbar_y@epitech.net>
**
** Started on  Tue Mar  1 23:37:09 2016 Jabbari Yassir
** Last update Sun Mar  6 18:28:05 2016 Loic Lopez
*/

#include "include/tetris.h"

char    **get_form(char *buffer, int height, int width)
{
  char  **tab;
  int	k;
  int	j;
  int	i;

  i = 0;
  if ((tab = malloc((height) * sizeof(char *))) == NULL)
    return (NULL);
  while (i < height)
    if ((tab[i++] = malloc((width) * sizeof(char))) == NULL)
      return (NULL);
  j = 0;
  k = -1;
  while (buffer[++k] != '\n');
  k += 1;
  while (j < height)
    {
      i = 0;
      while (i <= width)
	tab[j][i++] = buffer[k++];
      j++;
    }
  return (tab);
}

t_list		*contribute_list(t_list *new_elem, t_tmp *tmp)
{
  new_elem->data->height_list = tmp->height_tmp;
  new_elem->data->width_list = tmp->width_tmp;
  new_elem->data->tetrimino_list = tmp->tetrimino_tmp;
  new_elem->data->color_list = tmp->color_tmp;
  new_elem->data->name_list = tmp->name_tmp;
  return (new_elem);
}

t_list          *add(t_list *list, t_tmp *tmp)
{
  t_list        *new;

  new = malloc(sizeof(t_list));
  if ((new->data = malloc(sizeof(t_list))) == NULL || new == NULL)
    return (NULL);;
  new->prev = NULL;
  new->next = NULL;
  contribute_list(new, tmp);
  new->first = 0;
  if (list == NULL)
    {
      new->prev = new;
      new->next = new;
      new->first = 1;
    }
  else
    {
      while (list->first != 1)
	list = list->next;
      new->prev = list->prev;
      new->next = list;
      list->prev->next = new;
      list->prev = new;
    }
  return (new);
}

t_tmp		*contribute_complete(t_tmp *tmp)
{
  tmp->size = size_of_file(tmp->fd);
  if ((tmp->buffer = malloc(sizeof(char) * tmp->size)) == NULL || tmp->size == 0)
    return (NULL);
  if ((tmp->rd = read(tmp->fd, tmp->buffer, tmp->size)) == -1 || tmp->rd == 0)
    return (NULL);
  tmp->color_tmp = my_getnbr(&tmp->buffer[4]);
  tmp->width_tmp = my_getnbr(&tmp->buffer[0]);
  tmp->height_tmp = my_getnbr(&tmp->buffer[2]);
  return (tmp);
}

t_list		*complete_list(t_list *list)
{
  struct dirent	*entry;
  t_tmp		tmp;
  DIR		*dirp;

  if ((dirp = opendir("tetrimino")) == NULL)
    return (NULL);
  chdir("tetrimino");
  while ((entry = readdir(dirp)) != NULL)
    {
      if (entry->d_name[0] != '.')
	{
	  if ((tmp.fd = open(entry->d_name, O_RDONLY)) == -1)
	    return (NULL);
	  tmp.name_tmp = entry->d_name;
	  contribute_complete(&tmp);
	  tmp.tetrimino_tmp = get_form(tmp.buffer, tmp.height_tmp, tmp.width_tmp);
	  list = add(list, &tmp);
	  free(tmp.buffer);
	  close(tmp.fd);
	}
    }
  closedir(dirp);
  return (list);
}
