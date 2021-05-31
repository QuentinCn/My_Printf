/*
** EPITECH PROJECT, 2020
** print_hexa
** File description:
** print hexadecimal
*/

#include "../includes/bsprintf.h"

unsigned int nbr_hexa_len(unsigned int nb)
{
    unsigned int i = 0;

    while (my_compute_power_rec(16, i) <= nb) {
        i += 1;
    }
    return (i);
}

void print_hexa(va_list arg)
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
