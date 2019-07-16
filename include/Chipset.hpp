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

        bool isInstructionValid(std::string instruction);

        void setInputs(std::vector<std::string> inputs);
        void setOutputs(std::vector<std::string> outputs);
        std::vector<std::string> getInputs();
        std::vector<std::string> getOutputs();
        void sendInstruction();
        void checkValidInstruction(std::string instruction);

    private:

    CPU _cpu;
    IOManager _ioManager;
    std::vector<std::string> _inputs;
    std::vector<std::string> _outputs;
};

#endif
