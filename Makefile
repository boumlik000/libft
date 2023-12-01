# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 15:06:23 by rlamtaou          #+#    #+#              #
#    Updated: 2023/11/30 17:24:12 by mboumlik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra  -Werror 
RM = rm -f
AR = ar -rc

SRC = ft_isalpha.c\
     ft_isdigit.c\
     ft_isalnum.c\
     ft_isascii.c\
     ft_isprint.c\
     ft_toupper.c\
     ft_tolower.c\
     ft_strchr.c\
     ft_strrchr.c\
     ft_strncmp.c\
     ft_memchr.c\
     ft_strnstr.c\
     ft_atoi.c\
     ft_strlen.c\
     ft_memset.c\
     ft_bzero.c\
     ft_memmove.c\
     ft_strlcpy.c\
     ft_strlcat.c\
     ft_calloc.c\
     ft_strdup.c\
     ft_memcmp.c\
     ft_substr.c\
     ft_strjoin.c\
     ft_strtrim.c\
     ft_split.c\
     ft_itoa.c\
     ft_strmapi.c\
     ft_striteri.c\
     ft_putchar_fd.c\
     ft_putstr_fd.c\
     ft_putendl_fd.c\
     ft_putnbr_fd.c\
     ft_memcpy.c\


             
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)