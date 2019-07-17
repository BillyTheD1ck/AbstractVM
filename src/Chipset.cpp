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
            std::vector<std::string> instructions = getInstruction(_instructions.at(0);
            _cpu.executeInstruction(instructions);
            if (!_cpu.get_returnValue().empty() && _cpu.get_returnValue() == "exit")
                break;
            if (!_cpu.get_returnValue().empty())
                _ioManager.printOutput(_cpu.get_returnValue());
            if (_instructions.size() == 1 && _instructions.at(0) != "exit")
                throw Exception("Error : program ended without exit.");
        }
    }
    catch(std::exception const &e) {
        _ioManager.printError(e.what());
    }

}

std::vector<std::string> Chipset::getInstruction(std::string instruction)
{

}