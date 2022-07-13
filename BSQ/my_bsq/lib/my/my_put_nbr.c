/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** emacs
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int i = 1;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    while ((nb / i) >= 10) {
        i *= 10;
    }
    while (i > 0) {
        my_putchar((nb / i) % 10 + 48);
        i /= 10;
    }
}
