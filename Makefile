# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 18:38:40 by rkurnava          #+#    #+#              #
#    Updated: 2022/10/21 17:57:44 by rkurnava         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =    ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	 ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	 ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	 ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	 ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	 ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	 ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRCBONUS =    ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	      ft_lstdelone.c ft_lstadd_back.c ft_lstclear.c \
	      ft_lstiter.c ft_lstmap.c \

NAME = libft.a

CFLAGS = -Werror -Wextra -Wall

CC = cc

OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

$(NAME): 
	@$(CC) -c $(CFLAGS) $(SRC)
	@ar crs $(NAME) $(OBJ)
	@echo "$(NAME) created"

all: $(NAME)

bonus:    $(NAME)
	@$(CC) -c $(CFLAGS) $(SRCBONUS)
	@ar crs $(NAME) $(OBJBONUS)

clean:
	@rm -f $(OBJ) $(OBJBONUS)
	@echo "Objects and $(NAME) deleted"

fclean: clean
	@rm -f $(NAME)

re: fclean all
