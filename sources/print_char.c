/*
** EPITECH PROJECT, 2020
** print_char
** File description:
** display character
*/

#include "../includes/bsprintf.h"

void print_char(va_list arg)
{
    char c = va_arg(arg, int);

    write(1, &c, 1);
}
