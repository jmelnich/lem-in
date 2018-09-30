# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imelnych <imelnych@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 13:34:52 by imelnych          #+#    #+#              #
#    Updated: 2018/09/22 10:57:03 by imelnych         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= lemin
FLAGS		= -Wall -Wextra -Wextra
OBJ_DIR		= ./obj
LIBFT		= ./libft
SRC_DIR		= ./src
INC_DIR		= ./includes
SRC_files	= main.c

OBJ			= $(addprefix $(OBJ_DIR)/,$(SRC_files:.c=.o))

$(NAME): obj libftbuild $(OBJ)
	@gcc $(FLAGS) $(OBJ) -L $(LIBFT) -lft -I $(INC_DIR) -o $(NAME)
	@echo "\x1b[0;35mCreated lemin \x1B[0m"
	@echo "\x1b[0;32mSUCCESS!!\x1B[0m "

all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

libftbuild:
	@make -C $(LIBFT)


$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@gcc $(FLAGS) -I $(INC_DIR) -o $@ -c $<
	@echo "\x1b[0;32mCompilled:\x1B[0m \x1b[0;36m$<\x1B[0m"

clean:
	@make -C $(LIBFT) clean
	@/bin/rm -rf $(OBJ_DIR)
	@echo "\x1B[3;31mCleaned Lem-in objects\x1B[0m"

fclean: clean
	@make -C $(LIBFT) fclean
	@/bin/rm -rf $(NAME)
	@echo "\x1B[3;31mDeleted exec lemin\x1B[0m"

re: fclean all