void print_map(char **map);
int interact(char *key);
char **change_character_state(char **map_content, char *key);

typedef struct perso
{
    void     *data;
    struct   list_s  *next;
}   list_t;
