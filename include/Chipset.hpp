/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <string>
#include <vector>
#include "Exception.hpp"

#ifndef CHIPSET_HPP_
#define CHIPSET_HPP_

class Chipset
{
    public:
        Chipset();
        ~Chipset() = default;
        void setInputs(std::vector<std::string> inputs);
        void setOutputs(std::vector<std::string> outputs);
        std::vector<std::string> getInputs();
        std::vector<std::string> getOutputs();
        void sendInstruction();
        void checkValidInstruction(std::string instruction);

    private:
        std::vector<std::string> _inputs;
        std::vector<std::string> _outputs;
};

#endif
