/*
** main.c for mysh in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 20 13:58:33 2015 Hubert Wroblewski
** Last update Fri Jan 23 15:11:09 2015 Hubert Wroblewski
*/

#include <stdlib.h>

int	main(int ac, char **av, char **env)
{
  char	**stockenv;
  int	i;
  i = 0;

  if (env == NULL)
    {
      my_putstr("Error : Something went wrong\n");
      return (1);
    }
  stockenv = env;
  return (0);
}
