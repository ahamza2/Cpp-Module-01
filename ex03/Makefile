# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 15:39:12 by haarab            #+#    #+#              #
#    Updated: 2023/10/16 15:40:31 by haarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)


$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all