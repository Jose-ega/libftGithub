# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose-ega <jose-ega@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 18:09:09 by jose-ega          #+#    #+#              #
#    Updated: 2024/05/02 19:40:27 by jose-ega         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CULO = libft.a
# COMPIBANDERAS = gcc -Wall -Werror -Wextra
COMPILADOR = gcc
BANDERAS = -Wall -Wextra -Werror
FUNCIONES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
OBJETS = $(FUNCIONES: .c = .o)
COMANDO_AR = ar rcs
COMANDO_RM = rm -f
INCLUIRLOO = libft.h

all: $(CULO)

$(CULO): $(OBJETS) $(INCLUIRLOO)
	$(COMANDO_AR) $(CULO) $(OBJETS)

%.o: %.c
	$(COMPILADOR) $(BANDERAS) -c -g -o $@ $<
# lomismo
#  $(COMPIBANDERAS) -c -g -o $@ $<

clean:
	$(COMANDO_RM) $(OBJETS)

fclean: clean
	$(COMANDO_RM) $(CULO)

re: fclean all

.PHONY: clean re fclean
