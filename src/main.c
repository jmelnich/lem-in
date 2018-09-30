#include "lem-in.h"
#include "../includes/lem-in.h"
#include <fcntl.h>
#include <printf.h>

int main(int ac, char **av)
{
	char	*line;
	int		file_descriptor;

	file_descriptor = open(av[1], O_RDONLY);
	get_next_line(file_descriptor, &line);
	ft_putstr_fd(line, 0);

	t_room	*s = malloc(sizeof(t_room));
	s->name = NULL;
	s->left = NULL;

	return (0);
}
