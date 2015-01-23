##
## Makefile for Make in /home/wroble_h/rendu/PSU_2014_minishell1
## 
## Made by Hubert Wroblewski
## Login   <wroble_h@epitech.net>
## 
## Started on  Tue Jan 20 13:54:39 2015 Hubert Wroblewski
## Last update Fri Jan 23 12:09:40 2015 Hubert Wroblewski
##

CC	= gcc

RM	= rm -f

NAME	= mysh

SRCS	= main.c \
	my_putstr.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
