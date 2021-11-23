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
    char *input[] = {"-l: %d\n", "-r: %d\n", "-a: %d\n", "-t: %d\n", "-R: %d\n", "-d: %d\n", "is there an error ? %d\n"};
    for (int i = 0; i < 7; i += 1)
        printf(input[i], opt.c[i]);
}