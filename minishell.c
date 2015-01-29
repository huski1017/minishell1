/*
** minishell.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Jan 26 15:30:36 2015 Hubert Wroblewski
** Last update Wed Jan 28 14:45:57 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/mysh.h"

int	builtins(char **env, char *buffer)
{
  if (my_strcmp(buffer, "exit") != -1)
    exit(0);
  else if (my_strcmp(buffer, "pwd") != -1)
    {
      pwd(env, "PWD");
      return (0);
    }
  else if (my_strcmp(buffer, "env") != -1)
    {
      envir(env);
      return (0);
    }
  else if (my_strcmp(buffer, "cd") != -1)
    {
      my_cd(env, buffer);
      return (0);
    }
  return (-1);
}

void	unknow(char *buffer)
{
  int	i;

  i = 0;
  if (buffer[0] != '\n')
    {
      while (buffer[i] != '\n')
	{
	  my_putchar(buffer[i]);
	  i++;
	}
      my_putstr(" : command not found.\n");
    }
}

int	minishell(char **env)
{
  char	buffer[4096];
  char	*ret;

  if ((ret = malloc(sizeof(buffer))) == NULL)
    {
      my_putstr("Error = malloc failed");
      return (-1);
    }
  prompt(env);
  while (read(0, buffer, 4096) != 0)
    {
      if (builtins(env, buffer) == -1)
	unknow(buffer);
      free(ret);
      minishell(env);
    }
  return (0);
}
