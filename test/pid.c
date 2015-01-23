/*
** pid.c for pid in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Jan 20 14:23:49 2015 Hubert Wroblewski
** Last update Wed Jan 21 16:22:57 2015 Hubert Wroblewski
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int		main()
{
  pid_t		pid;
  pid = getppid();
  if ((pid = fork()) == -1)
    {
      printf("Fork problem\n");
      return (1);
    }
  if (pid == 0)
    printf("je suis le fils\n");
  else
    {
      int	status;

      printf("Je suis le pere, le pid de mon fils est : %d\n", pid);
      wait(&status);
      printf("Mon fils a terminé à faire ce qu'il avait à faire\n");
      printf("%d\n", status);
    }
  return (0);
}
