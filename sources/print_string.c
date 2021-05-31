/*
** EPITECH PROJECT, 2020
** print_string
** File description:
** display string
*/

#include "../includes/bsprintf.h"

void print_string(va_list arg)
{
    char *str = va_arg(arg, char *);

    my_putstr(str);
}
