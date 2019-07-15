/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include "abstractVM.hpp"
#include "Exception.hpp"

void abstractVM::fromFile(char *arg)
{
    arg = arg;
}

void abstractVM::fromInput()
{
}

abstractVM::abstractVM(int ac, char **av)
{
    if (ac > 2)
        throw Exception("Invalid number of arguments");
    if (ac == 1)
        fromInput();
    if (ac == 2)
        fromFile(av[1]);
}

abstractVM::~abstractVM()
{
}
