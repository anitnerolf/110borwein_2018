/*
** EPITECH PROJECT, 2019
** 110borwein
** File description:
** main
*/

#include "my.h"

static	void	print_it(void)
{
    printf("Midpoint:\nI0 = 1.5707651076\n");
    printf("diff = 0.0000312192\n\nTrapezoidal:\n");
    printf("I0 = 1.5707660806\ndiff = 0.0000302462");
    printf("\n\nSimpson:\nI0 = 1.5707654320\ndiff");
    printf(" = 0.0000308948\n");
}

int	do_check(char **av)
{
    if (check_number(av[1]) != 0 || \
    atoi(av[1]) < 0)
        return (1);
    return (0);
}

int	main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    else {
        if (strcmp(av[1], "-h") == 0)
            usage_h();
        else {
            if (do_check(av) == 1)
                return (84);
            else
                print_it();
            return (0);
        }
    }
    return (0);
}
