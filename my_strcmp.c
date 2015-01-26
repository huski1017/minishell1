/*
** my_strcmp.c for my_strcmp in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Jan 26 12:02:28 2015 Hubert Wroblewski
** Last update Mon Jan 26 16:14:51 2015 Hubert Wroblewski
*/

int	my_strcmp(char *s1, char *s2)
{
  int	n;

  n = 0;
  while (s1[n] && s2[n] && s2[n] != '\0')
    {
      if (s1[n] != s2[n])
	return (-1);
      n++;
    }
  return (s1[n] - s2[n]);
}
