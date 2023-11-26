# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 12:55:40 by haarab            #+#    #+#              #
#    Updated: 2023/11/12 12:55:41 by haarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp zombieHorde.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)


$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all