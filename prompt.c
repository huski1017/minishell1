/*
** prompt.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Jan 26 16:19:43 2015 Hubert Wroblewski
** Last update Mon Jan 26 17:05:36 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/mysh.h"

int	user(char **env)
{
  int	i;

  i;
  while (env[i] != NULL)
    {
      if (my_strcmp(env[i], "USER") != -1)
	return (i);
      i++;
    }
  return (-1);
}

void		prompt(char **env)
{
  static int	i;
  int		nb;
  int		cnt;
  char		*usr;

  cnt = 5;
  if ((nb = user(env)) != -1)
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
