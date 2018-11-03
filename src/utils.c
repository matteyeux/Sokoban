/*
** ETNA PROJECT, 02/11/2018 by hauteb_m
** utils.c
** File description:
**      code from libmy
*/

#include <unistd.h>

int my_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{   
    int i = 0;
    while(str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
