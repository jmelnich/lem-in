#include "lem_in.h"
#include <fcntl.h>
#include <stdio.h> //DELME

int main(int ac, char **av)
{
	char	*line;
	int		file_descriptor;

	if (!is_file(av[1])) {
		error_msg("YOU BASTARD, THIS IS NOT A FILE!");
		exit(1);
	}
	file_descriptor = open(av[1], O_RDONLY);
	get_next_line(file_descriptor, &line);
	check_ants(line);


//	t_room	*s = malloc(sizeof(t_room));
//	s->name = NULL;
//	s->left = NULL;

	return (0);
}
