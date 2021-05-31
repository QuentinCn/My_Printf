/*
** EPITECH PROJECT, 2020
** print_ptr
** File description:
** display pointer
*/

#include "../includes/bsprintf.h"

void print_hexa_with_nb(unsigned int nb)
{
    char *nbr = malloc(sizeof(char) * (nbr_hexa_len(nb) + 1));
    int y = 0;
    int x;

    if (nb == 0) {
        my_put_nbr(0);
        return;
    }
    for (int i = nbr_hexa_len(nb) - 1; i >= 0; i -= 1) {
        nbr[y] = '0';
        x = 1;
        for (; my_compute_power_rec(16, i) * x <= nb; x += 1) {
            if (nbr[y] == '9') {
                nbr[y] = 'a';
            } else
                nbr[y] += 1;
        }
        nb -= my_compute_power_rec(16, i) * (x - 1);
        y += 1;
    }
    nbr[y] = '\0';
    my_putstr(nbr);
    free(nbr);
}

void print_ptr(va_list arg)
{
    int ptr = va_arg(arg, int);

    my_putstr("0x");
    if (ptr != 0)
        print_hexa_with_nb(ptr);
}
