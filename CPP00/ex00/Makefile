# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 12:51:56 by marvin            #+#    #+#              #
#    Updated: 2024/07/27 12:51:56 by marvin           ###   ########.fr        #
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
OBJ= ${SRC:.cpp=.o}

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(CPPSTD) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all