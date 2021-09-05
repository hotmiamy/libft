SRCFILES ?= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c
SRCFILES += ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c
SRCFILES += ft_strlcpy.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c
SRCFILES += ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c
SRCFILES += ft_atoi.c ft_calloc.c ft_strdup.c

OBJFILES = $(SRCFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror
CC = clang
NAME = libft.a

AR = ar
RM = rm -f
ARFLAGS = rcs

.c.o:
	$(CC) $(CFLAGS) -c $^


$(NAME): $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES)

all: $(NAME)

re: fclean all

clean:
	$(RM) $(OBJFILES)

fclean: clean
	$(RM) $(NAME)

.PHONY: all re clean fclean
