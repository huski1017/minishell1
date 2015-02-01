/*
** minishell.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Jan 26 15:30:36 2015 Hubert Wroblewski
** Last update Sun Feb  1 23:19:21 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/mysh.h"
extern char **environ;

int	builtins(char *buffer)
{
  if (my_strcmp(buffer, "exit\n") != -1)
    exit(0);
  else if (my_strcmp(buffer, "pwd") != -1)
    {
      pwd(environ, "PWD");
      return (0);
    }
  else if (my_strcmp(buffer, "env") != -1)
    {
      envir(environ);
      return (0);
    }
  else if (my_bina(buffer, environ) != -1)
    return (0);
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

int	minishell()
{
  char	buffer[4096];
  char	*ret;
  int	ra;

  if ((ret = malloc(sizeof(buffer))) == NULL)
    {
      my_putstr("Error = malloc failed");
      return (-1);
    }
  prompt(environ);
  while ((ra = read(0, buffer, 4096)) != 0)
    {
      if (ra == -1)
	return (-1);
      if (builtins(buffer) == -1)
	unknow(buffer);
      free(ret);
      minishell();
    }
  return (0);
}
