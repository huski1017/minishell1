/*
** my_cd.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 27 16:54:17 2015 Hubert Wroblewski
** Last update Thu Jan 29 11:56:09 2015 Hubert Wroblewski
*/

#include "include/mysh.h"

char		**my_cd(char **env, char *buffer)
{
  int		i;
  static char	*oldPWD;

  if ((i = search(env, "PWD")) != -1)
    {
      if (buffer[3] == '-' && oldPWD != '\0')
	my_putstr(oldPWD);
      else if (buffer[3] == '-' && oldPWD == '\0')
	my_putstr("cd: OLDPWD not set\n");
      else if (buffer[2] == '\n')
	my_putstr("Error : invalid argument\n");
      else if (buffer[2] != '\n' && buffer[3] != '-');
    }
  else if ((i = search(env, "PWD")) == -1)
    {
      my_putstr("Error : i don\"t know where you are.\n");
    }
}
