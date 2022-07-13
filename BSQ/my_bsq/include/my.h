/*
** EPITECH PROJECT, 2021
** my
** File description:
** emacs
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <criterion/redirect.h>
#include <criterion/criterion.h>

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
void my_sort_int_array(int *tab, int size);
void my_swap(char *a, char *b);

int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);

char *my_strcpy(char *dest, char const *src);
char *my_strcapitalize(char *str);
char *my_strstr(char *str, char const *to_find);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);

char min(char x, char y, char z);
char *skip_the_fucking_first_line(char *map);
char *return_map(char *map, int i);
char *square(char *map, int rang_max, int len, int max);
char *first_line(char *map, int i);
char *syntax_error(char *map);

#endif
