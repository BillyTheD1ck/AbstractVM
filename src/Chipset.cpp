/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include "Chipset.hpp"

Chipset::Chipset()
{
}

void Chipset::setInputs(std::vector<std::string> inputs)
{
    _inputs = inputs;
}

void Chipset::setOutputs(std::vector<std::string> outputs)
{
    _outputs = outputs;
}

std::vector<std::string> Chipset::getInputs()
{
    return _inputs;
}

std::vector<std::string> Chipset::getOutputs()
{
    return _outputs;
}

void Chipset::sendInstruction()
{
}

void Chipset::checkValidInstruction(std::string instruction)
{
    instruction = instruction;
}