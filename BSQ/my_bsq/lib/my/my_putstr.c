/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** emacs
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    int x = 0;
    for (x = 0; str[x] != '\0'; x += 1)
        my_putchar(str[x]);
}
