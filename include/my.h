/*
** EPITECH PROJECT, 2021
** Code_Ls_Args
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>

typedef struct option_s
{
    char l;
    char r;
    char a;
    char t;
    char recursive;
    char d;
    char error;
} __attribute__((packed)) option_t;

union options {
    option_t opt;
    char c[7];
};

void ls_option_stat(char **av, option_t *opt);

#endif /* !MY_H_ */