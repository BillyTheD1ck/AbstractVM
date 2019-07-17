/*
** EPITECH PROJECT, 2022
** double.hpp
** File description:
** Created by tpautier,
*/

#ifndef DOUBLE_HPP
#define DOUBLE_HPP

#include "IOperand.hpp"
#include <math.h>
#include <sstream>

class Double : public IOperand
{
    public:

        explicit Double(std::string);
        ~Double() override = default;

        std::string toString () const override;
        eOperandType getType () const override;
        IOperand* operator+(const IOperand &rhs) const override;
        IOperand* operator-(const IOperand &rhs) const override;
        IOperand* operator*(const IOperand &rhs) const override;
        IOperand* operator/(const IOperand &rhs) const override;
        IOperand* operator%(const IOperand &rhs) const override;

    private:
        double _value;
};

#endif
