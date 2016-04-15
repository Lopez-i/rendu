/*
** my_strcpy.c for my_strcpy in /home/lopez_i/rendu/Piscine_C_J06/ex_02
**
** Made by loic lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Mon Oct  5 09:34:44 2015 loic lopez
** Last update Tue Mar  8 19:07:19 2016 Loic Lopez
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
