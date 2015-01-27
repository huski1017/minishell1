/*
** prompt.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Jan 26 16:19:43 2015 Hubert Wroblewski
** Last update Tue Jan 27 12:07:49 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/mysh.h"

void		prompt(char **env)
{
  static int	i;
  int		nb;
  int		cnt;
  char		*usr;

  cnt = 5;
  if ((nb = search(env, "USER")) != -1)
    {
      usr = env[nb];
      while (usr[cnt] != '\0')
	{
	  my_putchar(usr[cnt]);
	  cnt++;
	}
      my_putstr(" (");
      my_put_nbr(i);
      my_putstr("): ");
    }
  else
    my_putstr("$> ");
  i++;
}
