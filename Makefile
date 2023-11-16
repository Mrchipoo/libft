# -*- Makefile -*-
CC = cc
NAME = libft.a
src = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c  ft_putnbr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
bonus_src = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c
Object_bonus = $(bonus_src:.c=.o)
Object = $(src:.c=.o)
CFLAGS = -Wall -Werror -Wextra


all: $(NAME)
$(NAME): $(Object)
	ar rcs $@ $^
$(Object): $(src)
	$(CC) $(CFLAGS) $(src) -c
bonus : $(Object_bonus)
$(Object_bonus): $(bonus_src)
	$(CC) $(CFLAGS) $(bonus_src) -c
	ar rcs $(NAME) $(Object_bonus)
clean:
	rm -f $(Object) $(Object_bonus)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean bonus