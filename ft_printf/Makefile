# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 20:25:45 by pmelodi           #+#    #+#              #
#    Updated: 2019/09/15 17:16:12 by pmelodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

SRC_PATH :=		src/
INC_PATH :=		include/
LIB_PATH :=		libft/
OBJ_PATH :=		.obj/

CC :=		gcc
CFLAGS :=	-g -Wall -Wextra -Werror
IFLAGS :=	-I $(INC_PATH) -I $(LIB_PATH)
LFLAGS :=   -lft -L $(LIB_PATH)

HFILES :=	ft_printf

FILES :=  ft_printf parser manage_p manage_d \
            manage_u manage_o manage_x manage_csper \
            manage_buffer utils main_test float\

LIB :=		$(LIB_PATH)libft.a

HDRS =		$(addprefix $(INC_PATH), $(addsuffix .h, $(HFILES)))
SRCS =		$(addprefix $(SRC_PATH), $(addsuffix .c, $(FILES)))
OBJS =		$(addprefix $(OBJ_PATH), $(SRCS:%.c=%.o))

all: $(NAME)

$(NAME): $(LIB) $(OBJ_PATH) $(OBJS)
	@ $(CC) $(CFLAGS) $(IFLAGS) $(LFLAGS) $(OBJS) -o $(NAME)
	@echo "\n$(GREEN)ft_printf created$(RESET)"

$(LIB):
	@ $(MAKE) -C $(dir $@) $(notdir $@)

$(OBJ_PATH):
	@ mkdir -p $(OBJ_PATH)$(SRC_PATH)
$(OBJ_PATH)%.o: %.c $(HDRS)
	@ $(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
	@echo -n '.'

clean:
	@ rm -f $(OBJS)
	@ make clean -C $(LIB_PATH)
	@echo "$(RED)Objs deleted$(RESET)"

fclean: clean
	@ rm -f $(NAME)
	@ rm -rf $(OBJ_PATH)
	@ make fclean -C $(LIB_PATH)
	@echo "$(RED)ft_printf deleted$(RESET)"

re: fclean all

norm:
	@norminette src/
	@norminette include/ft_printf.h
	@norminette libft/srcs/
	@norminette libft/includes/