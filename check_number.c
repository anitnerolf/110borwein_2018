/*
** EPITECH PROJECT, 2019
** 110borwein
** File description:
** check_number
*/

#include "my.h"

int	check_number(char *av)
{
    int	i = 0;

    for (i = 0; av[i] != '\0'; i++) {
        if (av[i] < '0' || av[i] > '9')
            return (1);
    }
    return (0);
}
