# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 13:58:40 by ozozdemi          #+#    #+#              #
#    Updated: 2025/01/23 16:59:59 by oztozdem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libft.a

CC = 		@cc

CFLAGS = 	-Wall -Werror -Wextra -g3

AR = 		@ar rcs

RM = 		@rm -rf

SRC =		ft_memcpy.c \
			ft_isalpha.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strrchr.c \
			ft_atoi.c \
			ft_isascii.c \
			ft_memchr.c \
			ft_memset.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_bzero.c \
			ft_isdigit.c \
			ft_memcmp.c \
			ft_strchr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_toupper.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_split.c \
			ft_putnbr_fd.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_lstnew.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_front.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_printf.c \
			ft_putnbr.c \
			ft_pointer.c \
			get_next_line.c \
			get_next_line_utils.c \

OBJ = 		$(SRC:.c=.o)

all: 		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re: 		
			@$(MAKE) -s fclean all

.PHONY: 	bonus all clean fclean re