/*
** pwd.c for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 27 12:11:21 2015 Hubert Wroblewski
** Last update Tue Jan 27 12:24:46 2015 Hubert Wroblewski
*/

void	pwd(char **env)
{
  int	nb;
  int	cnt;
  char	*pwd;

  cnt = 4;
  if ((nb = search(env, "PWD")) != -1)
    {
      pwd = env[nb];
      while (pwd[cnt] != '\0')
	{
	  my_putchar(pwd[cnt]);
	  cnt++;
	}
      my_putchar('\n');
    }
  else
    my_putstr("This function is not available.\n");
}
