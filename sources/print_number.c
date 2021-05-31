/*
** EPITECH PROJECT, 2020
** print_number
** File description:
** display number
*/

#include "../includes/bsprintf.h"

void print_number(va_list arg)
{
    int nb = va_arg(arg, int);

    my_put_nbr(nb);
}
