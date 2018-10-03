#include "lem_in.h"
#include <stdio.h> //DELME

_Bool is_file(const char* path)
{
	struct stat buf;
	stat(path, &buf);
	return S_ISREG(buf.st_mode);
}

void	check_ants(char *str)
{
	int ants;

	ants = ft_atoi(str);
	if (ants <= 0 || ft_strcmp(ft_itoa(ants), ft_strtrim(str)) != 0) {
		error_msg("ANTS QUANTITY SHOULD BE POSITIVE INTEGER!");
	} else {
		save_ants(ants);
	}
}
