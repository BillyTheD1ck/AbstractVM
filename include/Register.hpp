/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <array>
#include "IOperand.hpp"

#ifndef REGISTER_HPP_
#define REGISTER_HPP_

class Register
{
    public:
        Register();
        ~Register() = default;

        IOperand *getAt(unsigned int);
        unsigned int getEmptyRegister();
        void pushAt(IOperand *, unsigned int);
        void clearRegisterAt(unsigned int);

    private:
        std::array<IOperand *, 16> _operands;
};

#endif