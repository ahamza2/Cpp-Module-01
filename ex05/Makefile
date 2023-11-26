# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 15:34:41 by haarab            #+#    #+#              #
#    Updated: 2023/11/10 15:40:26 by haarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)


$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all