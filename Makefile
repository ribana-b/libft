# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/21 11:31:37 by ribana-b          #+#    #+# Malaga       #
#    Updated: 2024/05/21 12:25:29 by ribana-b         ###   ########.com       #
#                                                                              #
# **************************************************************************** #


# @--------------------------------------------------------------------------@ #
# |                                 Colors                                   | #
# @--------------------------------------------------------------------------@ #

T_BLACK = \033[30m
T_RED = \033[31m
T_GREEN = \033[32m
T_YELLOW = \033[33m
T_BLUE = \033[34m
T_MAGENTA = \033[35m
T_CYAN = \033[36m
T_WHITE = \033[37m

BOLD = \033[1m
ITALIC = \033[3m
UNDERLINE = \033[4m
STRIKETHROUGH = \033[5m

CLEAR_LINE = \033[1F\r\033[2K

RESET = \033[0m

# @--------------------------------------------------------------------------@ #
# |                                 Macros                                   | #
# @--------------------------------------------------------------------------@ #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I./include

RM = rm -f

NAME = libft.a

SRC_DIR = ./
SRC2_DIR = ./
BONUS_DIR = ./

SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c
SRC2_FILES = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			 ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			 ft_putendl_fd.c ft_putnbr_fd.c
BONUS_FILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstadd_back_bonus.c \
			  ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstclear_bonus.c \
			  ft_lstiter_bonus.c ft_lstmap_bonus.c

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
SRC2 = $(addprefix $(SRC2_DIR), $(SRC2_FILES))
BONUS = $(addprefix $(BONUS_DIR), $(BONUS_FILES))

OBJ_SRC = $(SRC:%.c=%.o)
OBJ_SRC2 = $(SRC2:%.c=%.o)
OBJ_BONUS = $(BONUS:%.c=%.o)
ifdef WITH_BONUS
	OBJ = $(OBJ_SRC) $(OBJ_SRC2) $(OBJ_BONUS)
else
	OBJ = $(OBJ_SRC) $(OBJ_SRC2)
endif

COMPILE_MSG = @echo "$(CLEAR_LINE)🧩 🦔 $(T_WHITE)$(BOLD)Compiling $<...$(RESET)"
OBJ_MSG = @echo "✅ 🦔 $(T_YELLOW)$(BOLD)Objects $(RESET)$(T_GREEN)created successfully!$(RESET)"
OUTPUT_MSG = @echo "✅ 🦔 $(T_MAGENTA)$(BOLD)$(NAME) $(RESET)$(T_GREEN)created successfully!$(RESET)"
CLEAN_MSG = @echo "🗑️  🦔 $(T_YELLOW)$(BOLD)Objects $(RESET)$(T_RED)destroyed successfully!$(RESET)"
FCLEAN_MSG = @echo "🗑️  🦔 $(T_MAGENTA)$(BOLD)$(NAME) $(RESET)$(T_RED)destroyed successfully!$(RESET)"

# @--------------------------------------------------------------------------@ #
# |                                 Targets                                  | #
# @--------------------------------------------------------------------------@ #

all: $(NAME)

$(NAME): $(OBJ)
	$(OBJ_MSG)
	@ar rcs $(NAME) $(OBJ)
	$(OUTPUT_MSG)

%.o: %.c
	$(COMPILE_MSG)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_SRC) $(OBJ_SRC2) $(OBJ_BONUS)
	$(CLEAN_MSG)

fclean: clean
	@$(RM) $(NAME) *.out
	$(FCLEAN_MSG)

re:
	@make -s fclean
	@echo
	@make -s all

bonus:
	@make WITH_BONUS=1

# <-- Targets Declaration --> #
.PHONY: all clean fclean bonus run

# ========================================================================== #
