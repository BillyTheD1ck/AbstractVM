/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include "Memory.hpp"

IOperand* Memory::pop()
{
    IOperand *res = _operands.top();
    _operands.pop();
    return res;
}

void Memory::push(IOperand *operand)
{
    _operands.push(operand);
}