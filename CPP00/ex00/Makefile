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
OBJDIR= ./obj
OBJ= $(SRC:%.cpp=$(OBJDIR)/%.o)

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(CPPSTD) $(OBJ) -o $(NAME)
	@echo -n "Executable has been compiled\n"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CPP) $(CFLAGS) $(CPPSTD) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJDIR)
	@echo -n "All objects files and directory cleaned\n"

fclean: clean
	@$(RM) $(NAME)
	@echo -n "All objects files, directory and executable cleaned\n"

re: fclean all
