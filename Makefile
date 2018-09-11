# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccliffor <ccliffor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/28 12:06:00 by ccliffor          #+#    #+#              #
#    Updated: 2018/09/04 13:34:53 by ccliffor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROGRAM #
NAME = lib3d.a
SRC_FILES = vector3_add.c vector3_create.c vector3_cross.c vector3_dot.c \
	vector3_length.c vector3_multiply.c vector3_normalize.c vector3_subtract.c
SRCDIR = src
SRCS := $(SRC_FILES:%=$(SRCDIR)/%)
OBJS := $(SRCS:%.c=%.o)

## Compiling
DEPS = includes
WLFAGS = -Wall -Werror -Wextra -g
CC = clang
CFLAGS = $(WFLAGS) -I$(DEPS)

## Colours
COLOR_CLEAR = \033[0m
COLOR_CYAN = \033[01;36m
COLOR_GREEN = \033[01;32m
COLOR_RED = \033[01;31m

.PHONY: clean fclean re

# RULES #

## Core Program
all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "\n$(COLOR_CYAN)$(NAME)\t\t$(COLOR_GREEN)Library compiled$(COLOR_CLEAR)"

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(DEPS)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR_CYAN)$(NAME)\t\t$(COLOR_GREEN)Compiled $(COLOR_CLEAR)$@"

## General

clean:
	@rm -f $(OBJS)
	@echo "$(COLOR_CYAN)$(NAME)\t\t$(COLOR_RED)Removed object files$(COLOR_CLEAR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOR_CYAN)$(NAME)\t\t$(COLOR_RED)Removed binary$(COLOR_CLEAR)\n"

re: fclean all
