/*
** my_putstr.c for 	my_putstr in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Fri Jan 23 12:00:49 2015 Hubert Wroblewski
** Last update Thu Jan 29 17:45:28 2015 Hubert Wroblewski
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}

int	my_putstr(char *str)
{
  if ((write(1, str, my_strlen(str))) == -1)
    {
      (void)write(1, "Error : function write failed.\n", 31);
      exit(1);
    }
}
