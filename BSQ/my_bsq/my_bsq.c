/*
** EPITECH PROJECT, 2021
** B-CPE-110-NCE-1-1-BSQ-gwendoline.vanelle
** File description:
** my_bsq_test.c
*/

#include "include/my.h"

char *my_biggest_square(char *map)
{
    int i = 0, len = 0, rang_max = 0;
    char max = 0;

    for (len = 0; map[len] != '\n'; len++);
    len += 1;
    first_line(map, i);
    for (; map[i] != '\0'; i++) {
        if (map[i - 1] == '\n' && map[i] == '.')
            map[i] = '1';
        if (map[i] == 'o')
            map[i] = '0';
        if (map[i] == '.')
            map[i] = min(map[i - 1], map[i - len], map[i - len - 1]);
        if (map[i] > max) {
            max = map[i];
            rang_max = i;
        }
    }
    square(map, rang_max, len, max);
    return_map(map, i);
    return (map);
}

char main(int ac, char *av[])
{
    struct stat ftat;
    stat(av[1], &ftat);

    int fd = open(av[1], O_RDONLY);
    char buff[ftat.st_size];

    read(fd, buff, ftat.st_size);
    buff[ftat.st_size] = '\0';

    if (ac != 2)
        return (84);

    my_putstr(my_biggest_square(skip_the_fucking_first_line(buff)));
    close (fd);
}
