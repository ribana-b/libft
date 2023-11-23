# ========================================================================== #

# <-- Color Library --> #

# <-- Text Color --> #
T_BLACK = \033[30m
T_RED = \033[31m
T_GREEN = \033[32m
T_YELLOW = \033[33m
T_BLUE = \033[34m
T_MAGENTA = \033[35m
T_CYAN = \033[36m
T_WHITE = \033[37m

# <-- Text Style --> #
BOLD = \033[1m
ITALIC = \033[2m
UNDERLINE = \033[3m
STRIKETHROUGH = \033[4m

# <-- Background Color --> #
B_RED = \033[31m
B_BLACK = \033[30m
B_GREEN = \033[32m
B_YELLOW = \033[33m
B_BLUE = \033[34m
B_MAGENTA = \033[35m
B_CYAN = \033[36m
B_WHITE = \033[37m

# <-- Reset Everything --> #
RESET = \033[0m

# ========================================================================== #

# <-- Library's Name --> #
NAME = libft.a

# <-- Compilation Command --> #
CC = gcc

# <-- Compilation Flags --> #
CFLAGS = -Wall -Wextra -Werror -I ./include

# <-- Remove Command -->#
RM = rm -f

# <-- Directories --> #
SRC_DIR = ./
SRC2_DIR = ./
BONUS_DIR = ./

# <-- Files --> #
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

# <-- Directories + Files --> #
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
SRC2 = $(addprefix $(SRC2_DIR), $(SRC2_FILES))
BONUS = $(addprefix $(BONUS_DIR), $(BONUS_FILES))

# <-- Objects --> #
OBJ_SRC = $(SRC:%.c=%.o)
OBJ_SRC2 = $(SRC2:%.c=%.o)
OBJ_BONUS = $(BONUS:%.c=%.o)
ifdef WITH_BONUS
	OBJ = $(OBJ_SRC) $(OBJ_SRC2) $(OBJ_BONUS)
else
	OBJ = $(OBJ_SRC) $(OBJ_SRC2)
endif

# ========================================================================== #

# <-- Main Target --> #
all: $(NAME)

# <--Library Creation--> #
$(NAME): $(OBJ)
	@echo "✅ 🦔 $(T_YELLOW)$(BOLD)Objects $(RESET)$(T_GREEN)created successfully!$(RESET)"
	@ar rcs $(NAME) $(OBJ)
	@echo "✅ 🦔 $(T_MAGENTA)$(BOLD)$(NAME) $(RESET)$(T_GREEN)created successfully!$(RESET)"

# <-- Objects Creation --> #
%.o: %.c
	@echo "🔨 🦔 $(T_WHITE)$(BOLD)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "🧩 🦔 $(T_BLUE)$(BOLD)$@ $(RESET)$(T_GREEN)created!$(RESET)"

# <-- Objects Destruction --> #
clean:
	@$(RM) $(OBJ_SRC) $(OBJ_SRC2) $(OBJ_BONUS)
	@echo "🗑️  🦔 $(T_YELLOW)$(BOLD)Objects $(RESET)$(T_RED)destroyed successfully!$(RESET)"

# <-- Clean Execution + libft.a Destruction --> #
fclean: clean
	@$(RM) $(NAME) *.out
	@echo "🗑️  🦔 $(T_MAGENTA)$(BOLD)$(NAME) $(RESET)$(T_RED)destroyed successfully!$(RESET)"

# <-- Fclean Execution + All Execution --> #
re: fclean all

# <-- Bonus Target -->
bonus:
	@make WITH_BONUS=1

# <-- Color Testing --> #

colortesting:
	@echo "$(T_BLACK)Black text"
	@echo "$(T_RED)Red text"
	@echo "$(T_GREEN)Green text"
	@echo "$(T_YELLOW)Yellow text"
	@echo "$(T_BLUE)Blue text"
	@echo "$(T_MAGENTA)Magenta text"
	@echo "$(T_CYAN)Cyan text"
	@echo "$(T_WHITE)White text$(RESET)"
	@echo "$(BOLD)"
	@echo "$(T_BLACK)Bold Black text"
	@echo "$(T_RED)Bold Red text"
	@echo "$(T_GREEN)Bold Green text"
	@echo "$(T_YELLOW)Bold Yellow text"
	@echo "$(T_BLUE)Bold Blue text"
	@echo "$(T_MAGENTA)Bold Magenta text"
	@echo "$(T_CYAN)Bold Cyan text"
	@echo "$(T_WHITE)Bold White text$(RESET)"

# <-- Run program -->
run: re
	@$(CC) $(CFLAGS) $(NAME) -o $(NAME).out
	@./$(NAME).out

# <-- Targets Declaration --> #
.PHONY = all clean fclean re bonus colortesting run

# ========================================================================== #
