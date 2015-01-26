/*
** my_put_nbr.c for my_put_nbr in /home/wroble_h/rendu/day03
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Thu Oct  2 09:28:15 2014 Hubert Wroblewski
** Last update Mon Jan 26 16:54:11 2015 Hubert Wroblewski
*/

#include "include/mysh.h"

int	my_put_nbr(int nb)
{
  int	k;

  k = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
	{
	  k = 1;
	  nb = nb + 1;
	}
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (k == 1)
    {
      k = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
