/*
** ETNA PROJECT, 02/11/2018 by hauteb_m
** sokoban
** File description:
**      check for wall, Storage Location and boxes
*/

int check_wall(char **map_content, int line, int col)
{
    if (map_content[line][col] == '#')
        return 1;
    return 0;
}

int check_storage(char **map_content, int line, int col)
{
    if (map_content[line][col] == 'O')
        return 1;
    return 0;
}

int check_box(char **map_content, int line, int col)
{
    if (map_content[line][col] == 'X')
        return 1;
    return 0;
}

