/*
** seek_path.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Fri Jan 23 15:13:41 2015 Hubert Wroblewski
** Last update Mon Jan 26 16:15:03 2015 Hubert Wroblewski
*/

#include <unistd.h>
#include <stdlib.h>
#include "include/mysh.h"

int	seek_path(char **env)
{
  int	i;

  i = 0;
  while (env[i] != NULL)
    {
      if (my_strcmp(env[i], "PATH") != -1)
	return (i);
      i++;
    }
  if (env[i] == NULL)
    {
      (void)write(1, "Error : Something went wrong with \"char **env\"\n", 48);
      return (-1);
    }
}
