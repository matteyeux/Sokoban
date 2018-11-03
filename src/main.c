/*
** ETNA PROJECT, 02/11/2018 by hauteb_m
** Sokoban
** File description:
**      sokoban main
*/

#include <stdlib.h>

#include <include/lib_sokoban.h>
#include <include/sokoban.h>
#include <include/utils.h>

void usage(void)
{
    my_putstr("usage : sokoban [FILE NAME]");
    my_putchar('\n');
}

int main(int argc, char **argv)
{
    char **map_content = NULL;
    char *map;
    char *input;

    if (argc != 2) {
        usage();
        return -1;
    }

    map = argv[1];
    map_content = allocate_map(map);
    while (1) {
        my_putstr("\033c");
        print_map(map_content);
        my_putstr("Input: ");
        input = read_line();

        if (input != NULL)
            map_content = change_character_state(map_content, input);
    }
    return 0;
}
