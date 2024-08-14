# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/13 19:48:48 by marvin            #+#    #+#              #
#    Updated: 2024/08/13 19:48:48 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= weapon

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
SRC= ./src/HumanA.cpp ./src/HumanB.cpp ./src/Weapon.cpp ./src/main.cpp
OBJDIR= ./obj
OBJ= $(SRC:%.cpp=$(OBJDIR)/%.o)

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(CPPSTD) $(OBJ) -o $(NAME)
	@echo "$(BLUE)weapon: $(GREEN)program has been compiled$(WHITE)"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CPP) $(CFLAGS) $(CPPSTD) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJDIR)
	@echo "$(BLUE)weapon: $(GREEN)objects files and directory cleaned$(WHITE)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BLUE)weapon: $(GREEN)executable cleaned$(WHITE)"

re: fclean all
