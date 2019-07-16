/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

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

std::vector<std::string> IOManager::fromFile(char *arg)
{
    std::string line;
    std::ifstream input;

    input.open(arg, std::ifstream::in);
    while (std::getline(input, line)) {
        if (line.at(0) == ';')
            continue;
        _inputs.push_back(line);
    }
    return _inputs;
}

std::vector<std::string> IOManager::fromInput()
{
    std::string line;

    while (std::cin) {
        getline(std::cin, line);
        if (line == ";;")
            break;
        _inputs.push_back(line);
    }
    return _inputs;
}

void IOManager::printOutput(std::string output)
{
    std::cout << output << std::endl;
}

void IOManager::printError(std::string error)
{
    std::cerr << error << std::endl;
}