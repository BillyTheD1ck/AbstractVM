/*
** EPITECH PROJECT, 2022
** int8.hpp
** File description:
** Created by tpautier,
*/

#ifndef INT8_HPP
#define INT8_HPP

#include "IOperand.hpp"
#include <sstream>

class Int8 : public IOperand
{
    public:

    explicit Int8(std::string val);
    ~Int8() override = default;
    std::string toString () const override;
    eOperandType getType () const override;
    IOperand* operator+(const IOperand &rhs) const override;
    IOperand* operator-(const IOperand &rhs) const override;
    IOperand* operator*(const IOperand &rhs) const override;
    IOperand* operator/(const IOperand &rhs) const override;
    IOperand* operator%(const IOperand &rhs) const override;

    private:
        int _value;
};

#endif
