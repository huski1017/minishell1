/*
** my_cd.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 27 16:54:17 2015 Hubert Wroblewski
** Last update Tue Jan 27 17:21:36 2015 Hubert Wroblewski
*/

char		**my_cd(char **env, char *buffer)
{
  int		i;
  static char	*oldPWD;

  if ((i = search(env, "PWD")) != -1)
    {
      if (buffer[2] == '-' && oldPWD != '\0')
	
    }
  else if ((i = search(env, "PWD")) == -1)
    {
      my_putstr("Error : i don\"t know where you are.\n");
    }
}
