#include <stdlib.h>
#include <stdio.h>

typedef struct s
{
   int id;
  char *info;
} ts;

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}


ts *fill_stack(ts *struct_stack) {
	struct_stack->id = 1;
	struct_stack->info = malloc(sizeof(char) * 13);
	struct_stack->info = ft_strcpy(struct_stack->info, "on the stack\0");
	return (struct_stack);
}

ts *fill_heap(ts **struct_heap) {
	*struct_heap = malloc(sizeof(ts));
	(*struct_heap)->id = 2;
	(*struct_heap)->info = malloc(sizeof(char) * 12);
	(*struct_heap)->info = ft_strcpy((*struct_heap)->info, "on the heap\0");
	return (*struct_heap);
}

int main(void) {
	ts struct_stack;
	ts *struct_heap;
	ts *p1;
	ts *p2;
	p1 = fill_stack(&struct_stack);
	p2 = fill_heap(&struct_heap);
	printf("%s\t%d\n", p1->info, p1->id);
	printf("%s\t%d\n", p2->info, p2->id);
}