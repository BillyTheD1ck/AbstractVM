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
    std::regex rgx("^(push|assert|load|store) (int8|int16|int32|float|double|bigdecimal)\\(([-+]?[0-9]*\\.?[0-9]+)\\)|^(pop|clear|dup|swap|dump|add|sub|mul|div|mod|exit)$");
    std::smatch matches;
    std::vector<std::string> arguments;

    if(!std::regex_search(instruction, matches, rgx))
        throw Exception("\"Error : \"" + instruction + "\" is not a valid instruction");
    for (size_t i = 0; i < matches.size(); ++i) {
        if (matches[i].str() != "")
            arguments.push_back(matches[i].str());
    }
    arguments.erase(arguments.begin());
    if (arguments.at(0) == "load" || arguments.at(0) == "store") {
        if (atoi(arguments.at(2).c_str()) > 15 || atoi(arguments.at(2).c_str()) < 0)
            throw Exception("Error : register " + arguments.at(2) + " does not exist");
    }
    return arguments;

}