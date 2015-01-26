/*
** my_putchar.c for my_putchar in /home/wroble_h/rendu/PSU_2014_minishell1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Jan 26 16:54:57 2015 Hubert Wroblewski
** Last update Mon Jan 26 16:56:10 2015 Hubert Wroblewski
*/

#include <stdlib.h>

void	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    exit (1);
}
