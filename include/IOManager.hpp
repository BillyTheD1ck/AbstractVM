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
        void fromFile(char *arg);
        void fromInput();
        void printOutput();
        void setOutput(std::string output);

    private:
        std::vector<std::string> _inputs;
        std::string _output;
};

#endif