/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include "abstractVM.hpp"

void abstractVM::fromFile(char *arg)
{
    std::string line;
    std::ifstream input;

    input.open(arg, std::ifstream::in);
    while (std::getline(input, line)) {
        std::cout << "line: " << line << std::endl;
        if (line.at(0) == ';')
            continue;
    }
}

void abstractVM::fromInput()
{
    std::string line;

    while (std::cin) {
        getline(std::cin, line);
        std::cout << "line: " << line << std::endl;
        if (line == ";;")
            break;
    }
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