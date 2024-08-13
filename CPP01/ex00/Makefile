# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 00:43:13 by marvin            #+#    #+#              #
#    Updated: 2024/07/31 00:43:13 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= zombie

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
SRC= ./src/main.cpp ./src/newZombie.cpp ./src/randomChump.cpp ./src/Zombie.cpp
OBJDIR= ./obj
OBJ= $(SRC:%.cpp=$(OBJDIR)/%.o)

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(CPPSTD) $(OBJ) -o $(NAME)
	@echo "$(BLUE)zombie: $(GREEN)program has been compiled$(WHITE)"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CPP) $(CFLAGS) $(CPPSTD) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJDIR)
	@echo "$(BLUE)zombie: $(GREEN)objects files and directory cleaned$(WHITE)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BLUE)zombie: $(GREEN)executable cleaned$(WHITE)"

re: fclean all
