/*
** test.c for  in /home/wroble_h/rendu/test/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Sun Feb  1 21:33:24 2015 Hubert Wroblewski
** Last update Sun Feb  1 21:34:59 2015 Hubert Wroblewski
*/

int	main()
{
  int	status;

  if (fork() == -1)
    return (1);
  if (wait(status) == -1)
    return (-1);
  printf("ok");
}
