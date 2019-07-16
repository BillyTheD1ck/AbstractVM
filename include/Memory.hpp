/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <stack>
#include "IOperand.hpp"

#ifndef REGISTERS_HPP_
#define REGISTERS_HPP_

class Memory
{
    public:
        Memory();
        ~Memory() = default;

        IOperand *pop();
        void push(IOperand *);

    private:
        std::stack<IOperand *> _operands;
};

#endif