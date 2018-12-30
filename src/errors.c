#include "lem_in.h"

void error_msg	(char *str)
{
	ft_putstr(ANSI_COLOR_RED);
	ft_putendl(str);
	ft_putstr(ANSI_COLOR_RESET);
	exit(1);
}

void comments_msg	(char *str)
{
	ft_putstr(ANSI_COLOR_CYAN);
	ft_putendl(str);
	ft_putstr(ANSI_COLOR_RESET);
}
