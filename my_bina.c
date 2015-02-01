/*
** my_bina.c for miishell1 in /home/wroble_h/rendu/test/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Sun Feb  1 21:49:11 2015 Hubert Wroblewski
** Last update Sun Feb  1 23:40:06 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include <unistd.h>
#include "include/mysh.h"

int	my_bina(char *buffer, char **env)
{
  int	status;
  pid_t	pid;
  char	*opt[] = {"ls", "-l", NULL};

  if (my_strcmp(buffer, "ls") != -1)
    {
      if (execve("/bin/ls", opt, env) != -1)
	return (0);
      my_putstr("Error : I can't found ls.\n");
    }
  return (-1);
}

