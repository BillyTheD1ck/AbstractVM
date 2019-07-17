/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include "Register.hpp"

Register::Register()
{
    for (unsigned int i = 0; i < 16; i++) {
        _operands.at(i) = nullptr;
    }
}

IOperand* Register::getAt(unsigned int pos)
{
    return _operands.at(pos);
}

unsigned int Register::getEmptyRegister()
{
    for (unsigned int i = 0; i < 16; i++) {
        if (_operands.at(i) == nullptr)
            return i;
    }
    return -1;
}

void Register::pushAt(IOperand * operand, unsigned int pos)
{
    _operands.at(pos) = operand;
}

void Register::clearRegisterAt(unsigned int pos)
{
    _operands.at(pos) = nullptr;
}