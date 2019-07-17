/*
** EPITECH PROJECT, 2022
** float.hpp
** File description:
** Created by tpautier,
*/

#ifndef FLOAT_HPP
#define FLOAT_HPP

#include "IOperand.hpp"
#include <math.h>

class Float : public IOperand
{
    public:

        explicit Float(std::string);
        ~Float() override = default;

        std::string toString () const override;
        eOperandType getType () const override;
        IOperand* operator+(const IOperand &rhs) const override;
        IOperand* operator-(const IOperand &rhs) const override;
        IOperand* operator*(const IOperand &rhs) const override;
        IOperand* operator/(const IOperand &rhs) const override;
        IOperand* operator%(const IOperand &rhs) const override;

    private:
        float _value;
};

#endif
