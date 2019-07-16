/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <vector>
#include "IOperand.hpp"

#ifndef REGISTER_HPP_
#define REGISTER_HPP_

class Register
{
    public:
        Register();
        ~Register() = default;

    private:
        std::vector<IOperand *> _operands;
};

#endif