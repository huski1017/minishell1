/*
** envir.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 27 14:42:31 2015 Hubert Wroblewski
** Last update Tue Jan 27 14:47:22 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/mysh.h"

void	envir(char **env)
{
  int	i;

  i = 0;
  if (env[i] == NULL)
    my_putstr("Error : Env is empty.\n");
  else
    {
      while (env[i] != NULL)
	{
	  my_putstr(env[i]);
	  my_putchar('\n');
	  i++;
	}
    }
}
