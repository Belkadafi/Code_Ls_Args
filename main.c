/*
** EPITECH PROJECT, 2021
** Code_Ls_Args
** File description:
** main
*/

#include "my.h"

int main(int ac __attribute__((unused)), char **av)
{
    union options opt = { 0 };
    ls_option_stat(av, &(opt.opt));
    char *input[] = {"-l: %d\n", "-r: %d\n", "-a: %d\n", "-t: %d\n", "-R: %d\n", "-d: %d\n", "-h: %d\n", "is there an error ? %d\n", NULL};
    for (int i = 0; input[i]; i += 1)
        printf(input[i], opt.c[i]);
}