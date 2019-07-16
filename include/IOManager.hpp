/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "Exception.hpp"

#ifndef IOMANAGER_HPP_
#define IOMANAGER_HPP_

class IOManager
{
    public:
        IOManager(int ac, char **av);
        ~IOManager() = default;
        std::vector<std::string> fromFile(char *arg);
        std::vector<std::string> fromInput();
        void printOutput(std::string output);
        void printError(std::string error);

    private:
        std::vector<std::string> _inputs;
};

#endif