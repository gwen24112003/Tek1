/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-gwendoline.vanelle
** File description:
** my_bsq_2.c
*/

#include "include/my.h"

char min(char x, char y, char z)
{
    char min = x;

    if (y < min)
        min = y;
    if (z < min)
        min = z;
    min = min + 1;

    return (min);
}

char *skip_the_fucking_first_line(char *map)
{
    int i = 0;

    for (i = 0; map[i] != '\n'; i++);
    i++;
    map += i;
    return (map);
}

char *return_map(char *map, int i)
{
    i = 0;
    for (; map[i] != '\0'; i++) {
        if (map[i] == '0')
            map[i] = 'o';
        if (map[i] != 'o' && map[i] != 'x' && map[i] != '\n')
            map[i] = '.';
    }
    return (map);
}

char *square(char *map, int rang_max, int len, int max)
{
    int i = rang_max;
    max = max - 48;
    for (char y = 0; y < max; y++) {
        for (char x = 0; x < max; x++) {
            map[i - (y*len) - x] = 'x';
        }
    }
}

char *first_line(char *map, int i)
{
    while (map[i] != '\n') {
        if (map[i] == '.')
            map[i] = '1';
        if (map[i] == 'o')
            map[i] = '0';
        i++;
    }
}
