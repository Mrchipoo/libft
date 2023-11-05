# -*- Makefile -*-
CC = gcc
src = ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcat.c  ft_strnstr.c ft_tolower.c  
ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_toupper.c
ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strlen.c ft_strtrim.c  
ft_isalnum.c ft_isprint.c ft_memmove.c ft_strjoin.c ft_strncmp.c ft_substr.c    
Object = $(src:.c=.o)
CFLAGS = -Wall -Werror -Wextra


all: libft
libft: $(Object)
	ar rcs libft.a $(Object)
clean:
	rm -f $(Object)
fclean: clean
	rm -f libft.a
re: fclean libft
