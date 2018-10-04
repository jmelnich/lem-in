#include "lem_in.h"
#include "../includes/lem_in.h"
#include <sys/stat.h>

_Bool is_file(const char *path)
{
	struct stat buf;
	stat(path, &buf);
	return S_ISREG(buf.st_mode);
}

void	check_ants(char *str, t_general* data)
{
	int ants;

	ants = ft_atoi(str);
	if (ants <= 0 || ft_strcmp(ft_itoa(ants), ft_strtrim(str)) != 0) {
		error_msg("ANTS QUANTITY SHOULD BE POSITIVE INTEGER!");
	} else {
		save_ants(ants, data);
	}
}
