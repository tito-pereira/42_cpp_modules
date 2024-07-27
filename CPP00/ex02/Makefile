# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 17:24:05 by marvin            #+#    #+#              #
#    Updated: 2024/07/27 17:24:05 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= megaphone

# Compilation
CPP= c++
CFLAGS= -Wall -Wextra -Werror
CPPSTD= -std=c++98

# Tools
RM= rm -rf

# Source && Object files
SRC= megaphone.cpp
OBJ= ${SRC:.c=.o}

$(NAME):
	$(CPP) $(CFLAGS) $(CPPSTD) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all