/*
** EPITECH PROJECT, 2021
** Code_Ls_Args
** File description:
** test_ls_args
*/

#include "my.h"
#include <assert.h>

int main(void)
{
{    option_t opt = { 0 };
    char *av[] = {"ls", "hello", NULL};
    ls_option_stat(av, &(opt));
    // Test_nothing
    assert(0 == opt.l);
    assert(0 == opt.r);
    assert(0 == opt.a);
    assert(0 == opt.t);
    assert(0 == opt.recursive);
    assert(0 == opt.d);
    assert(0 == opt.error);
    printf("Passed with nothing\n");}
// Test_l
{    option_t opt = { 0 };
    char *av[] = {"ls", "-l", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(1 == opt.l);
    assert(0 == opt.r);
    assert(0 == opt.a);
    assert(0 == opt.t);
    assert(0 == opt.recursive);
    assert(0 == opt.d);
    assert(0 == opt.error);
    printf("Passed lflag\n");}
// Test_r
{    option_t opt = { 0 };
    char *av[] = {"ls", "-r", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(0 == opt.l);
    assert(1 == opt.r);
    assert(0 == opt.a);
    assert(0 == opt.t);
    assert(0 == opt.recursive);
    assert(0 == opt.d);
    assert(0 == opt.error);
    printf("Passed rflag\n");}
// Test_a
{    option_t opt = { 0 };
    char *av[] = {"ls", "-a", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(0 == opt.l);
    assert(0 == opt.r);
    assert(1 == opt.a);
    assert(0 == opt.t);
    assert(0 == opt.recursive);
    assert(0 == opt.d);
    assert(0 == opt.error);
    printf("Passed aflag\n");}
// Test_t
{    option_t opt = { 0 };
    char *av[] = {"ls", "-t", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(0 == opt.l);
    assert(0 == opt.r);
    assert(0 == opt.a);
    assert(1 == opt.t);
    assert(0 == opt.recursive);
    assert(0 == opt.d);
    assert(0 == opt.error);
    printf("Passed tflag\n");}
// Rest_Rec
{    option_t opt = { 0 };
    char *av[] = {"ls", "-R", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(0 == opt.l);
    assert(0 == opt.r);
    assert(0 == opt.a);
    assert(0 == opt.t);
    assert(1 == opt.recursive);
    assert(0 == opt.d);
    assert(0 == opt.error);
    printf("Passed Rflag\n");};
// Test_d
{    option_t opt = { 0 };
    char *av[] = {"ls", "-d", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(0 == opt.l);
    assert(0 == opt.r);
    assert(0 == opt.a);
    assert(0 == opt.t);
    assert(0 == opt.recursive);
    assert(1 == opt.d);
    assert(0 == opt.error);
    printf("Passed dflag\n");}
// Test_error
{    option_t opt = { 0 };
    char *av[] = {"ls", "-u", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(0 == opt.l);
    assert(0 == opt.r);
    assert(0 == opt.a);
    assert(0 == opt.t);
    assert(0 == opt.recursive);
    assert(0 == opt.d);
    assert(1 == opt.error);
    printf("Passed error\n");}
// Test_error2
{    option_t opt = { 0 };
    char *av[] = {"ls", "-", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(0 == opt.l);
    assert(0 == opt.r);
    assert(0 == opt.a);
    assert(0 == opt.t);
    assert(0 == opt.recursive);
    assert(0 == opt.d);
    assert(1 == opt.error);
    printf("Passed error2\n");}
// Test_comb1
{    option_t opt = { 0 };
    char *av[] = {"ls", "-lrdRta", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(1 == opt.l);
    assert(1 == opt.r);
    assert(1 == opt.a);
    assert(1 == opt.t);
    assert(1 == opt.recursive);
    assert(1 == opt.d);
    assert(0 == opt.error);
    printf("Passed combination 1\n");}
// Test_comb2
{    option_t opt = { 0 };
    char *av[] = {"ls", "-l", "-r", "-d", "-R", "-t", "-a", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(1 == opt.l);
    assert(1 == opt.r);
    assert(1 == opt.a);
    assert(1 == opt.t);
    assert(1 == opt.recursive);
    assert(1 == opt.d);
    assert(0 == opt.error);
    printf("Passed combinaison 2\n");}
// Test_comb3
{    option_t opt = { 0 };
    char *av[] = {"ls", "-lR", "-ta", "hello", NULL};
    ls_option_stat(av, &(opt));
    assert(1 == opt.l);
    assert(0 == opt.r);
    assert(1 == opt.a);
    assert(1 == opt.t);
    assert(1 == opt.recursive);
    assert(0 == opt.d);
    assert(0 == opt.error);
    printf("Passed last test GG\n");}
}