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
        Double(std::string);
        ~Double() override = default;
        std::string toString () const;
        eOperandType getType () const;
        IOperand* operator+(const IOperand &rhs) const override;
        IOperand* operator-(const IOperand &rhs) const override;
        IOperand* operator*(const IOperand &rhs) const override;
        IOperand* operator/(const IOperand &rhs) const override;
        IOperand* operator%(const IOperand &rhs) const override;

    private:
        double _value;
};

#endif
