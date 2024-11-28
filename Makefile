# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oztozdem <oztozdem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 13:58:40 by ozozdemi          #+#    #+#              #
#    Updated: 2024/11/28 15:01:33 by oztozdem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libft.a

CC = 		@cc

CFLAGS = 	-Wall -Werror -Wextra

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

GREEN =		\033[1;32m
YELLOW =	\033[1;33m
BLUE =		\033[1;34m
RED =		\033[1;31m
RESET =		\033[0m
BOLD =		\033[1m

$(NAME):	$(OBJ)
			@echo "$(BLUE)$(BOLD)\n\tCompiling ${NAME}... 🛠️\n$(RESET)"
			$(AR) $(NAME) $(OBJ)
			@echo "$(GREEN)$(BOLD)\n\t${NAME} compiled 🚀\n$(RESET)"

all: 		$(NAME)

clean:
			@echo "$(RED)$(BOLD)\n\tCleaning up object files 🧹\n$(RESET)"
			$(RM) $(OBJ)
			@echo "$(GREEN)$(BOLD)\n\tObject files removed! ✅\n$(RESET)"

fclean:		clean
			@echo "$(RED)$(BOLD)\n\tDeleting ${NAME} 🗑️\n$(RESET)"
			$(RM) $(NAME)
			@echo "$(GREEN)$(BOLD)\n\t${NAME} deleted! ❌\n$(RESET)"

re: 		
			@echo "$(YELLOW)$(BOLD)\n\tRecompiling ${NAME} 🔄\n$(RESET)"
			@$(MAKE) -s fclean all
			@echo "$(YELLOW)$(BOLD)\n\tDone recompiling! ✅\n$(RESET)"

.PHONY: 	bonus all clean fclean re