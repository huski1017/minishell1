/*
** my_cd.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 27 16:54:17 2015 Hubert Wroblewski
** Last update Thu Jan 29 19:17:00 2015 Hubert Wroblewski
*/

#include "include/mysh.h"

char		**oldPWD(char **env)
{
  static char	*oldPWD;

  if (oldPWD == '\0')
    {
      my_putstr("cd: oldPWD not set\n");
    }
  else
    my_putstr(oldPWD);
}

char	**argCD(char **env)
{
  printf("fail arg\n");
}

char	**realcd(char **env)
{
  printf("correct\n");
}

char		**my_cd(char **env, char *buffer)
{
  char		comp[3] = "-\n\0";
  int		i;
  static char	**(*function[3])(char **env);
  int		cnt;

  function[0] = oldPWD;
  function[1] = argCD;
  function[2] = realcd;
  i = 0;
  cnt = 0;
  if ((i = search(env, "PWD")) != -1)
    {
      while (comp[cnt] != buffer[3])
	{
	  cnt++;
	  if (cnt == 2 || cnt == 3)
	    {
	      function[--cnt](env);
	      return (0);
	    }
	}
      function[cnt](env);
    }
  else if ((i = search(env, "PWD")) == -1)
    my_putstr("Error : i don\"t know where you are.\n");
}
