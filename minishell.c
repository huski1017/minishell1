/*
** minishell.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Jan 26 15:30:36 2015 Hubert Wroblewski
** Last update Tue Jan 27 14:13:59 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/mysh.h"

int	minishell(char **env)
{
  char	buffer[4096];
  char	*ret;

  if ((ret = malloc(4096 * sizeof(buffer))) == NULL)
    {
      my_putstr("Error = malloc failed");
      return (-1);
    }
  prompt(env);
  while (read(0, buffer, 4096) != 0)
    {
      if (my_strcmp(buffer, "exit") != -1)
	exit(1);
      else if (my_strcmp(buffer, "pwd") != -1)
	pwd(env, "PWD");
      if (my_strcmp(buffer, "env") != -1)
	//	env(env);
      free(ret);
      minishell(env);
    }
  return (0);
}
