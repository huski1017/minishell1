/*
** minishell.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Jan 26 15:30:36 2015 Hubert Wroblewski
** Last update Mon Jan 26 16:22:57 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/mysh.h"

int	minishell(char **env)
{
  char	buffer[4096];
  int	ret;

  prompt(env);
  while (read(0, buffer, 4096) != 0)
    {
      if (my_strcmp(buffer, "exit") != -1)
	exit(1);
      minishell(env);
    }
  return (0);
}
