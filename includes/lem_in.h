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
#define START "##start"
#define END "##end"

typedef struct		s_general
{
	int				ants;
	struct t_room 	*start_r;
	struct t_room	*end_r;
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
	_Bool 			is_free;
//	struct s_room	*left; hz what i wanted
//	struct s_room	*right;
	t_link			*links;
}					t_room;


void	error_msg (char *str);
void	comments_msg(char*str);
void 	wrong_command (char *str);
_Bool	is_file(const char* path);
_Bool	is_skip_comment(char *line);
_Bool	is_proper_command(char *line);
void	check_ants(char *str, t_general *data);
void 	save_ants(int ants, t_general *data);

#endif
