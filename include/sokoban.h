/*
** ETNA PROJECT, 03/11/2018 by hauteb_m
** sokoban.h
** File description:
**      sokoban header
*/

typedef int bool;

#define true 1
#define false 0

void print_map(char **map);
int interact(char *key);
char **change_character_state(char **map_content, char *key);

