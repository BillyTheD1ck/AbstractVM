/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <string>
#include <vector>
#include "Exception.hpp"
#include "CPU.hpp"
#include "IOManager.hpp"

#ifndef CHIPSET_HPP_
#define CHIPSET_HPP_

class Chipset
{
    public:
        Chipset(int ac, char **av);
        ~Chipset() = default;

        void processInstructions();

    private:

    std::vector<std::string> getInstruction(std::string instruction);

    CPU _cpu;
    IOManager _ioManager;
    std::vector<std::string> _instructions;
};

#endif
