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
        Memory() = default;
        ~Memory() = default;

        IOperand *pop();
        void push(IOperand *);
        unsigned long int getSize() {return _operands.size();}
        IOperand *top();
        std::stack<IOperand *> getStack() { return _operands;}

    private:
        std::stack<IOperand *> _operands;
};

#endif