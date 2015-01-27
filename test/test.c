/*
** test.c for test in /home/wroble_h/rendu/PSU_2014_minishell1/test
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 27 12:31:29 2015 Hubert Wroblewski
** Last update Tue Jan 27 12:34:36 2015 Hubert Wroblewski
*/

#include <stdlib.h>

int	main(int ac, char **av, char **env)
{
  int	i;

  i = 0;
  while (env[i] != NULL)
    {
      printf("%s\n", env[i]);
      i++;
    }
  return (0);
}
