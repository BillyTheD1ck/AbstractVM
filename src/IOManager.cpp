/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include "IOManager.hpp"

std::vector<std::string> IOManager::getInstructions(int ac, char **av)
{
    std::vector<std::string> result;

    if (ac > 2)
        throw Exception("Invalid number of arguments");
    if (ac == 1)
        result = fromInput();
    if (ac == 2)
        result = fromFile(av[1]);
    return result;
}

std::vector<std::string> IOManager::fromFile(char *arg)
{
    std::string line;
    std::ifstream input;

    input.open(arg, std::ifstream::in);
    if (!input)
        throw Exception("Error : invalid file");
    while (std::getline(input, line)) {
        if (line.empty())
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
        if (line.empty())
            continue;
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