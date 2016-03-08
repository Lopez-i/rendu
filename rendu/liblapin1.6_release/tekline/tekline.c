/*
** tekline.c for tekline.c in /home/lopez_i/tekline
** 
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
** 
** Started on  Fri Dec 18 10:26:08 2015 Loic Lopez
** Last update Sat Dec 19 15:55:40 2015 Loic Lopez
*/

#include <lapin.h>

void	tekpixel(t_bunny_pixelarray	*pix,
		 t_bunny_position	*pos,
		 t_color		*color)
{
  if (pos->x < pix->clipable.clip_width && pos->y < pix->clipable.clip_height)
    ((t_color *)pix->pixels)[pos->x + pos->y * pix->clipable.clip_width]
      = *color;
}

void	tekline(t_bunny_pixelarray	*pix,
		t_bunny_position	*pos,
		t_color			*color)
{
  float coeff;
  t_bunny_position pixel;
  float	tmp;

  tmp = 0;
  pixel.x = pos[0].x;
  pixel.y = pos[0].y;
  tmp = (tmp < 0) ? -tmp : tmp;
  coeff = ((float)pos[1].y - (float)pos[0].y )
    / ((float)pos[1].x - (float)pos[0].x);
  if (coeff <= 1 && coeff > 0)
    {
      while (pixel.x <= pos[1].x)
	{
	  tmp = tmp + coeff;
	  if (tmp >= 1)
	    {
	      pixel.y++;
	      tmp = tmp - 1;
	    }
	  tekpixel(pix, &pixel, color);
	  pixel.x++;
	}
    }
}

int	main()
{
  t_bunny_window	*win;
  t_bunny_position	new_pos;
  t_bunny_position	pos[2];
  t_color		color;
  t_bunny_pixelarray	*pix;

  new_pos.x = 0;
  new_pos.y = 0;
  pos[0].x = 640;
  pos[0].y = 400;
  pos[1].x = 1280;
  pos[1].y = 600;
  pix = bunny_new_pixelarray(1280, 800);
  color.full = GREEN;
  win = bunny_start(1280, 800, false, "Tek");
  tekpixel(pix, pos, &color);
  bunny_blit(&win->buffer, &pix->clipable, &new_pos);
  bunny_display(win);
  bunny_loop(win, 60, win);
  bunny_stop(win);
  return (0);
}
