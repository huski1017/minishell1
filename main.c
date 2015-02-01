/*
** main.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 20 13:58:33 2015 Hubert Wroblewski
** Last update Fri Jan 30 17:15:05 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/mysh.h"

extern char **environ;

int	main()
{
  char	**env;
  int	pathnb;

  if (environ == NULL)
    my_putstr("Be careful some function are not available\n");
  env = environ;
  if ((pathnb = seek_path(env)) == -1)
    return (1);
  if (minishell() == -1)
    return (-1);
  return (0);
}
