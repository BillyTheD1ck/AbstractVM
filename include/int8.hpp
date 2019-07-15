/*
** EPITECH PROJECT, 2022
** int8.hpp
** File description:
** Created by tpautier,
*/

#ifndef INT8_HPP
#define INT8_HPP

#include "IOperand.hpp"

class Int8 : public IOperand
{
    public:

    Int8(int8_t);
    ~Int8() override = default;
    IOperand* operator+(const IOperand &rhs) const override;
    IOperand* operator-(const IOperand &rhs) const override;
    IOperand* operator*(const IOperand &rhs) const override;
    IOperand* operator/(const IOperand &rhs) const override;
    IOperand* operator%(const IOperand &rhs) const override;

    private:
        int8_t _value;
};

#endif
