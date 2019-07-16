/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <IOManager.hpp>
#include "IOManager.hpp"

IOManager::IOManager(int ac, char **av)
{
    if (ac > 2)
        throw Exception("Invalid number of arguments");
    if (ac == 1)
        fromInput();
    if (ac == 2)
        fromFile(av[1]);
}

void IOManager::fromFile(char *arg)
{
    std::string line;
    std::ifstream input;

    input.open(arg, std::ifstream::in);
    while (std::getline(input, line)) {
        if (line.at(0) == ';')
            continue;
        _inputs.push_back(line);
    }
}

void IOManager::fromInput()
{
    std::string line;

    while (std::cin) {
        getline(std::cin, line);
        if (line == ";;")
            break;
        _inputs.push_back(line);
    }
}

void IOManager::printOutput()
{
    std::cout << _output << std::endl;
}

void IOManager::setOutput(std::string output)
{
    _output = output;
}