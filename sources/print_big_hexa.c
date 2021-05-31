/*
** EPITECH PROJECT, 2020
** print_big_hexa
** File description:
** print hexadecimal in maj
*/

#include "../includes/bsprintf.h"

void print_big_hexa(va_list arg)
{
    unsigned int nb = va_arg(arg, unsigned int);
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
                nbr[y] = 'A';
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
