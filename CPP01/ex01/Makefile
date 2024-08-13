# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 11:52:42 by marvin            #+#    #+#              #
#    Updated: 2024/07/31 11:52:42 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= zombieHorde

# Compilation && Tools
CPP= c++
CFLAGS= -Wall -Wextra -Werror
CPPSTD= -std=c++98
RM= rm -rf

# Color Codes
RED= \e[31m
GREEN= \e[32m
BLUE= \e[34m
WHITE= \e[37m

# Source && Object files
SRC= ./src/main.cpp ./src/Zombie.cpp ./src/zombieHorde.cpp
OBJDIR= ./obj
OBJ= $(SRC:%.cpp=$(OBJDIR)/%.o)

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(CPPSTD) $(OBJ) -o $(NAME)
	@echo "$(BLUE)zombieHorde: $(GREEN)program has been compiled\n$(WHITE)"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CPP) $(CFLAGS) $(CPPSTD) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJDIR)
	@echo "$(BLUE)zombieHorde: $(GREEN)objects files and directory cleaned\n$(WHITE)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BLUE)zombieHorde: $(GREEN)executable cleaned\n$(WHITE)"

re: fclean all
