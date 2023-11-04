# -*- Makefile -*-

a.out: main.c libft.a
	gcc main.c libft.a
libft.a: ft_strtrim.o ft_strlen.o ft_calloc.o ft_substr.o
	ar rcs libft.a ft_strtrim.o ft_strlen.o ft_calloc.o ft_substr.o
ft_strtrim.o: ft_strtrim.c
	gcc -c ft_strtrim.c
ft_strlen.o: ft_strlen.c
	gcc -c ft_strlen.c
ft_calloc.o: ft_calloc.c
	gcc -c ft_calloc.c
ft_substr.o: ft_substr.c
	gcc -c ft_substr.c
clean:
	rm -f *.o