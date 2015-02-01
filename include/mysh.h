/*
** mysh.h for minishell1 in /home/wroble_h/rendu/PSU_2014_minishell1/include
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Jan 26 13:01:45 2015 Hubert Wroblewski
** Last update Sun Feb  1 23:33:29 2015 Hubert Wroblewski
*/

#ifndef MYSH_H_
# define MYSH_H_

int	my_strcmp(char *, char *);
int	seek_path(char **);
int	my_strlen(char *);
int	my_putstr(char *);
int	minishell();
int	search(char **, char *);
void	prompt(char **);
int	my_put_nbr(int);
void	my_putchar(char);
void	pwd(char **, char *);
void	envir(char **);
int	builtins(char *);
void	unknow(char *);
int	my_bina(char *,char **);

#endif /*!MYSH_H */
