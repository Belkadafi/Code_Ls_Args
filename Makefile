##
## EPITECH PROJECT, 2021
## Code_Ls_Args
## File description:
## Makefile
##

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
MAIN = main.c
MAIN_OBJ = $(MAIN:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I./include
TESTFLAGS = -I./include
NAME = get_args
TESTNAME = unit_tests
TESTSRC = $(wildcard tests/*.c)

all : $(NAME)

$(NAME) :	$(OBJ) $(MAIN_OBJ)
		$(CC) $(MAIN_OBJ) $(OBJ) -o $(NAME)

clean :
		$(RM) $(OBJ) $(MAIN_OBJ)
		$(RM) *.gcno *.gcda
		$(RM) $(TESTNAME)

fclean : clean
		$(RM) $(NAME)

re : fclean all

tests_run : $(TESTNAME)

$(TESTNAME) : $(OBJ)
		$(CC) $(TESTFLAGS) $(SRC) $(TESTSRC) -o $(TESTNAME)
		./$(TESTNAME)