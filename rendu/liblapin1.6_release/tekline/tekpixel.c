/*
** tekpixel.c for tekpixel.c in /home/lopez_i/liblapin1.5_release/starfield_2020
** 
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Fri Dec  4 14:44:01 2015 Loic Lopez
** Last update Fri Dec 18 18:32:27 2015 Loic Lopez
*/

#include <lapin.h>

void	tekpixel(t_bunny_pixelarray	*pix,
		 t_bunny_position	*pos,
		 t_bunny		*color)
{
  if (pos->x < pix->clipable.clip_width && pos->y < pix->clipable.clip_height)
    ((t_color *)pix->pixels)[pos->x + pos->y * pix->clipable.clip_width]
      = *color;
}
