#include "../cub3d.h"

void    set_pos(t_pos *pos, t_pos s)
{
    pos->x = s.x;
    pos->y = s.y;
}

void    copy_pos(t_pos *d, t_pos s)
{
    d->x = s.x;
    d->y = s.y;
}