#include "libft.h"
#include <stdio.h>

int	main(void) 
{
	char a[10];
	char b[10];
	
	printf("substr=%s\n", ft_substr("jhihowj", 1, 5));
	printf("atoi =%d\n", ft_atoi("-589"));
	printf("isalnum =%d\n", ft_isalnum('j'));
	printf("isalpha =%d\n", ft_isalpha('j'));
	printf("isascii =%d\n", ft_isascii('j'));
	printf("isdogit =%d\n", ft_isdigit('j'));
	printf("isprint =%d\n", ft_isprint('j'));
	printf("itoa =%s\n", ft_itoa(-505042));
	printf("memcmp =%d\n", ft_memcmp("ja", "jb", 2));
	ft_putnbr_fd(-90, 1);
	printf("putnbr = ");
	printf("\n");
	printf("putchar = ");
	ft_putchar_fd('s', 1);
	printf("\n");
	printf("putendl = ");
	ft_putendl_fd("adaa", 1);
	printf("\n");
	printf("putstr = ");
	ft_putstr_fd("adaa", 1);
	printf("\n");
	printf("strchr =%s\n", ft_strchr("hihowj", 'i'));
	printf("strdup =%s\n", ft_strdup("jhihowj"));
	printf("strjoin =%s\n", ft_strjoin("hhh","what"));
	printf("strlcat =%ld\n", ft_strlcat(a, "jhihoaj", 8));
	printf("strlcpy = %ld\n", ft_strlcpy(b, "jhihoaj", 8));
	printf("strlen =%d\n", ft_strlen("jhihoaj"));
	printf("strncmp =%d\n", ft_strncmp("bh", "ah", 2));
	printf("strnstr =%s\n", ft_strnstr("jhikjho", "kj", 8));
	printf("strrchr =%s\n", ft_strrchr("jhihoaj",'a'));
	printf("strtrim =%s\n", ft_strtrim("jhihoaj", "j"));
	printf("substr =%s\n", ft_substr("jhihoaj", 1, 6));
	printf("tolower =%c\n", ft_tolower('j'));
	printf("toupper =%c\n", ft_toupper('j'));
	return (0);
}
