/*
** EPITECH PROJECT, 2021
** Code_Ls_Args
** File description:
** opt
*/

#include "my.h"

void ls_option_stat(char **av __attribute__((unused)), option_t *opt __attribute__((unused)))
{
    for (int i = 0; av[i]; i += 1) {
        if (av[i][0] == '-')
            if (av[i][1] == 'l')
                opt->l = 1;
    }
}