# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 17:21:34 by marvin            #+#    #+#              #
#    Updated: 2024/07/27 17:21:34 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= phonebook

# Compilation
CPP= c++
CFLAGS= -Wall -Wextra -Werror
CPPSTD= -std=c++98

# Tools
RM= rm -rf

# Source && Object files
SRC= ./src/PhoneBook.cpp ./src/Contact.cpp ./src/main.cpp
OBJ= ${SRC:.c=.o}

$(NAME):
	$(CPP) $(CFLAGS) $(CPPSTD) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all