/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <vector>
#include "IOperand.hpp"

#ifndef REGISTERS_HPP_
#define REGISTERS_HPP_

class Register
{
    public:
        Register();
        ~Register() = default;

    private:
        std::vector<IOperand *> _operands;
};

#endif
