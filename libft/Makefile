# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schibi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/28 18:35:00 by schibi            #+#    #+#              #
#    Updated: 2016/12/01 19:19:58 by schibi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

CC= gcc

CFLAGS= -Wall -Wextra -Werror

RM= /bin/rm -rf

LDFLAGS= -L.

LDLIBS= -lft

SRC= \
	 ft_atoi.c\
	 ft_bzero.c\
	 ft_isalnum.c\
	 ft_isalpha.c\
	 ft_isascii.c\
	 ft_isdigit.c\
	 ft_isprint.c\
	 ft_memalloc.c\
	 ft_memccpy.c\
	 ft_memchr.c\
	 ft_memcmp.c\
	 ft_memcpy.c\
	 ft_memdel.c\
	 ft_memmove.c\
	 ft_memrevcpy.c\
	 ft_memset.c\
	 ft_putchar.c\
	 ft_putchar_fd.c\
	 ft_putendl.c\
	 ft_putendl_fd.c\
	 ft_putnbr.c\
	 ft_putnbr_fd.c\
	 ft_putstr.c\
	 ft_putstr_fd.c\
	 ft_strcat.c\
	 ft_strchr.c\
	 ft_strrchr.c\
	 ft_strclr.c\
	 ft_strcmp.c\
	 ft_strcpy.c\
	 ft_strdel.c\
	 ft_strdup.c\
	 ft_strequ.c\
	 ft_striter.c\
	 ft_striteri.c\
	 ft_strjoin.c\
	 ft_strtrim.c\
	 ft_strlcat.c\
	 ft_strlen.c\
	 ft_strmap.c\
	 ft_strmapi.c\
	 ft_strncat.c\
	 ft_strncmp.c\
	 ft_strncpy.c\
	 ft_strnequ.c\
	 ft_strnew.c\
	 ft_strnstr.c\
	 ft_strstr.c\
	 ft_strsub.c\
	 ft_tolower.c\
	 ft_toupper.c\
	 ft_strsplit.c\
	 ft_itoa.c\
	 ft_lstnew.c\
	 ft_lstdelone.c\
	 ft_lstdel.c\
	 ft_lstadd.c\
	 ft_lstiter.c\
	 ft_lstmap.c\
	 ft_iscntrl.c\
	 ft_isupper.c\
	 ft_ispunct.c\
	 ft_islower.c\
	 ft_isxdigit.c\
	 ft_strdup_nl.c\
	 ft_strjoin_nl.c\

OBJ= $(SRC:%.c=%.o)

$(NAME): $(SRC)
	@ $(CC) $(CFLAGS) -I libft.h -c $(SRC)
	@ ar rc $(NAME) $(OBJ)
	@ ranlib $(NAME)
	@ echo "\033[32m\nLibft created!\033[0m"

all: $(NAME)

clean:
	@ $(RM) $(OBJ)
	@ echo "\033[33m\nLibft object deleted!\033[0m"

fclean: clean
	@ $(RM) $(NAME)
	@ echo "\033[31m\nLibft deleted!\033[0m"

re: fclean all

libft created!\033[0.PHONY: all re clean fclean
