typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

#include <stdio.h>
int main ()
{
	t_list gg;
	gg.content = 5;
	gg.next = 3;
	printf("%d",gg.content * gg.next);
	return 0;
}
