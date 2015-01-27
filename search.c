/*
** search.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 27 12:04:42 2015 Hubert Wroblewski
** Last update Tue Jan 27 12:07:47 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/mysh.h"

int	search(char **env, char *str)
{
  int	i;

  i = 0;
  while (env[i] != NULL)
    {
      if (my_strcmp(env[i], str) != -1)
	return (i);
      i++;
    }
  return (-1);
}
