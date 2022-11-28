# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmachaka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 10:42:38 by kmachaka          #+#    #+#              #
#    Updated: 2022/11/28 19:37:00 by kmachaka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client

CC = gcc
FLAGS = -Wall -Werror -Wextra -I$(PRINTF)/headers -L$(PRINTF) -lftprintf

PRINTF = ft_printf

all:
	@make -s -C $(PRINTF)
	@gcc $(FLAGS) server.c -o $(SERVER)
	@gcc $(FLAGS) client.c -o $(CLIENT)
	@echo "Server and Client Are Ready!"

clean:
	@make clean -s -C $(PRINTF)
	@echo "Executable files have been cleaned successfully"


fclean:
	@make fclean -s -C $(PRINTF)
	@rm -f $(SERVER) $(CLIENT)
	@echo "Server and Client Have Been Cleaned Successfully"

re: fclean all
