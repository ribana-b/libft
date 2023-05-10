# Program name
NAME = libft.a
#Compilator
COMPILATOR = gcc
#Flags
FLAGS = -Wall -Wextra -Werror -c
#Prefix
P = ft_
#Subfix
S1 = _fd
#Files
FILES = $(P)isalpha.c \
		$(P)isdigit.c \
		$(P)isalnum.c \
		$(P)isascii.c \
		$(P)isprint.c \
		$(P)strlen.c \
		$(P)memset.c \
		$(P)bzero.c \
		$(P)memcpy.c \
		$(P)memmove.c \
		$(P)strlcpy.c \
		$(P)strlcat.c \
		$(P)toupper.c \
		$(P)tolower.c \
		$(P)strchr.c \
		$(P)strrchr.c \
		$(P)toupper.c \
		$(P)tolower.c \
		$(P)strncmp.c \
		$(P)memcmp.c \
		$(P)memchr.c \
		$(P)strnstr.c \
		$(P)atoi.c \
		$(P)calloc.c \
		$(P)strdup.c \

FILES2 = $(P)substr.c \
		$(P)strjoin.c \
		$(P)strmapi.c \
		$(P)striteri.c \
		$(P)strtrim.c \
		$(P)split.c \
		$(P)itoa.c \
		$(P)putchar$(S1).c \
		$(P)putstr$(S1).c \
		$(P)putendl$(S1).c \
		$(P)putnbr$(S1).c \

FILESBONUS = $(P)lstnew.c \
			$(P)lstadd_front.c \
			$(P)lstsize.c \
			$(P)lstlast.c \
			$(P)lstadd_back.c \
			$(P)lstdelone.c \
			$(P)lstclear.c \
			$(P)lstiter.c \
			$(P)lstmap.c \

OBJ = $(FILES:.c=.o) $(FILES2:.c=.o)

OBJBONUS = $(FILESBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES) $(FILES2)
	$(COMPILATOR) $(FLAGS) $(FILES) $(FILES2)

bonus:
	$(COMPILATOR) $(FLAGS) $(FILESBONUS)
	@ar rcs $(NAME) $(OBJBONUS) 

clean:
	@/bin/rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re bonus

#     RRRRR
#   RRR   RRR
#  RRR     RRR
#  RR      RRRRRRRRRRRRRRRR
#  RRR     RRRR          RRRRRR
#   RRR    RRR               RRR
#     RRRRRRRR               RRRR
#          RRR            RRRRR
#          RRR            RRR
#          RRR          RRRR
#         RRR       RRRRR
#         RRRRRRRRRRRRRR
#       RRRR          RRRR
#      RRRR             RRR
#     RRRR               RRR
#    RRR                  RRR     RRRRR
#  RRRR                    RRRRRRRR