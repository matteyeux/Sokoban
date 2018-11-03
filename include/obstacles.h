/*
** ETNA PROJECT, 02/11/2018 by hauteb_m
** obstacle.h
** File description:
**      obstacle header
*/

int check_wall(char **map_content, int line, int col);
int check_storage(char **map_content, int line, int col);
int check_box(char **map_content, int line, int col);

typedef struct my_P
{
    int x;
    int y;
} my_P;
