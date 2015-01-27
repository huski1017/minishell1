/*
** main.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 20 13:58:33 2015 Hubert Wroblewski
** Last update Tue Jan 27 14:53:49 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/mysh.h"

int	main(int argc, char  **argv, char **env)
{
  char	**stockenv;
  int	pathnb;

  if (env[0] == NULL)
    my_putstr("Be careful some function are not available\n");
  stockenv = env;
  if ((pathnb = seek_path(stockenv)) == -1)
    return (1);
  if (minishell(env) == -1)
    return (-1);
  return (0);
}
