/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include "Chipset.hpp"

Chipset::Chipset(int ac, char **av)
{
    _ioManager = IOManager();
    _cpu = CPU();

    try {
        _instructions = _ioManager.getInstructions(ac, av);
    }
    catch(std::exception const &e) {
        _ioManager.printError(e.what());
    }
}

void Chipset::processInstructions()
{
    try {
        while (!_instructions.empty()) {
            if (!isInstructionValid(_instructions.at(0)))
                throw Exception(_instructions.at(0) + " : invalid instruction");
            // send instruction to CPU
        }
    }
    catch(std::exception const &e) {
        _ioManager.printError(e.what());
    }

}

bool Chipset::isInstructionValid(std::string instruction)
{
    //to do regexp
    return false;
}