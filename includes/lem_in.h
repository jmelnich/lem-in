#ifndef LEM_IN_H
# define LEM_IN_H

#include "../libft/libft.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

typedef struct		s_general
{
	int				ants;
}					t_general;

typedef struct 		s_link
{
	char 			*links;
	struct s_link	*next;
}					t_link;

typedef struct		s_room
{
	char			*name;
	int				x;
	int				y;
	struct s_room	*left;
	struct s_room	*right;
	t_link			*links;
}					t_room;


void	check_ants(char *str);
void	error_msg (char *str);
_Bool	is_file(const char* path);
void 	save_ants(int ants);

#endif
