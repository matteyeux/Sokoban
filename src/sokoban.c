/*
** ETNA PROJECT, 02/11/2018 by hauteb_m
** sokoban.c
** File description:
**      sokoban functions
*/

#include <include/lib_sokoban.h>
#include <include/obstacles.h>
#include <include/utils.h>
#include <include/sokoban.h>

void print_map(char **map_content)
{   int i = 0;

    while (*map_content[i] != '\0') {
        my_putstr(map_content[i]);
        my_putchar('\n');
        i++;
    }
    return;
}

char **move_character(char **map_content, char *key, int l, int c)
{
    if ((*key == 'Z' || *key == 'z') && !check_wall(map_content, l-1, c)) {
        if (check_box(map_content, l-1, c) && !check_wall(map_content, l-3, c) && l > 2) {
            map_content[l-2][c] = 'X';
            map_content[l-1][c] = 'P';
        } else if (check_wall(map_content, l-2, c)) {
                map_content[l-1][c] = 'P';
        } else if (l == 2 && !check_wall(map_content, l-2, c)) {
            return map_content;
        } else if (l == 2 && !check_wall(map_content, l-2, c)) {
            return map_content;
        } else {
            map_content[l-1][c] = 'P';
        }
    } else if ((*key == 'S'|| *key == 's') && !check_wall(map_content, l+1, c)) {
        map_content[l+1][c] = 'P';
    } else if ((*key == 'Q' || *key == 'q') && !check_wall(map_content, l, c-1)) {
        map_content[l][c-1] = 'P';
    } else if ((*key == 'D' || *key == 'd') && !check_wall(map_content, l, c+1)) {
        map_content[l][c+1] = 'P';
    } else {
        return map_content;
    }
    map_content[l][c] = ' ';
    return map_content;
}

char **change_character_state(char **map_content, char *key)
{
    int i = 0;
    int j = 0;
    int line_len;

    while (*map_content[i] != '\0') {
        line_len = my_strlen(map_content[i]);
        for (j = 0; j <= line_len; ++j) {
            if (map_content[i][j] == 'P') {
                map_content = move_character(map_content, key, i, j);
                return map_content;
            }
        }
        i++;
    }
    return map_content;
}

