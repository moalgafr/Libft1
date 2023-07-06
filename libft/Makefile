# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moalgafr <moalgafr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 15:10:38 by moalgafr          #+#    #+#              #
#    Updated: 2023/03/27 18:19:52 by moalgafr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_isdigit.c\
		ft_isprint.c	ft_strlen.c		ft_memset.c		ft_memmove.c\
		ft_memcpy.c 	ft_bzero.c		ft_toupper.c 	ft_tolower.c\
		ft_strlcpy.c	ft_strlcat.c	ft_strchr.c		ft_strrchr.c\
		ft_memcmp.c		ft_memchr.c		ft_calloc.c		ft_strdup.c\
		ft_strncmp.c	ft_atoi.c		ft_strnstr.c	ft_substr.c\
		ft_strjoin.c	ft_split.c		ft_strtrim.c	ft_putchar_fd.c\
		ft_putstr.c		ft_putchar.c	ft_putendl_fd.c	ft_strmapi.c\
		ft_putnbr.c		ft_striteri.c	ft_putnbr_fd.c	ft_putstr_fd.c\
		ft_realloc.c\
		
		
OBJ = $(SRC:.c=.o)

SRCB = ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c\
	   ft_lstadd_back.c		ft_lstiter.c	ft_lstclear.c	ft_lstdelone.c\
	   ft_lstmap.c\
	   

OBJB = $(SRCB:.c=.o)

CC = cc

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

all: $(NAME) bonus

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJB)
	ar -rcs $(NAME) $(OBJ) $(OBJB)

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME) $(OBJB)

re: fclean all

.PHONY: all clean fclean re