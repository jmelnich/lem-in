#include "../libft/libft.h"

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



