# -*- Makefile -*-

src = ft_calloc.c ft_strlen.c ft_strtrim.c ft_substr.c 
Object = $(src:.c=.o)
CFLAGS = -Wall -Werror -Wextra




libft: $(Object)
	ar rcs libft.a $(Object)
%.o: %.c
	gcc -c $(src)
clean:
	rm -f *.o



