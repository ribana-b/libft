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
S2 = _bonus

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

FILESBONUS = $(P)lstnew$(S2).c \
			$(P)lstadd_front$(S2).c \
			$(P)lstsize$(S2).c \
			$(P)lstlast$(S2).c \
			$(P)lstadd_back$(S2).c \
			$(P)lstdelone$(S2).c \
			$(P)lstclear$(S2).c \
			$(P)lstiter$(S2).c \
			$(P)lstmap$(S2).c \

OBJ = $(FILES:.c=.o) $(FILES2:.c=.o)

OBJBONUS = $(FILESBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(COMPILATOR) $(FLAGS) $< -o $@

bonus: $(OBJBONUS)
	ar rcs $(NAME) $(OBJBONUS)


clean:
	rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

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
