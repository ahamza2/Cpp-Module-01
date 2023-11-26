# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 15:57:04 by haarab            #+#    #+#              #
#    Updated: 2023/11/09 17:07:14 by haarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ReplaceF

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp replaceF.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)


$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all