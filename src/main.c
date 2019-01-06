#include "lem_in.h"
#include "../includes/lem_in.h"
#include <fcntl.h>
#include <stdio.h> //TODO: DELME

int main(int ac, char **av)
{
	char		*line;
	int			file_descriptor;
	t_general	data;

	if (ac != 2)
		error_msg("USAGE: ./lemin [map]");
	if (!is_file(av[1])) {
		error_msg("PLEASE, SUBMIT A MAP");
		exit(1);
	}
	file_descriptor = open(av[1], O_RDONLY);
	get_next_line(file_descriptor, &line);
	while (is_skip_comment(line))
		get_next_line(file_descriptor, &line);
	check_ants(line, &data);
	printf("%d\n", data.ants);
	get_next_line(file_descriptor, &line);
	while (!is_proper_command(line))
		get_next_line(file_descriptor, &line);
	if (ft_strcmp(line, START) == 0) {
		// TODO:register start room, skip comments, clear lines
	} else {
		error_msg("THERE IS NO START COMMAND");
	}
	while (!is_proper_command(line))
		get_next_line(file_descriptor, &line);
	if (ft_strcmp(line, END) == 0) {
		// TODO:register end room, skip comments, clear lines
	} else {
		error_msg("THERE IS NO END COMMAND");
	}
//	t_room	*s = malloc(sizeof(t_room));
//	s->name = NULL;
//	s->left = NULL;

	return (0);
}
