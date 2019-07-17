/*
** EPITECH PROJECT, 2022
** int32.hpp
** File description:
** Created by tpautier,
*/

#ifndef INT32_HPP
#define INT32_HPP

#include "IOperand.hpp"
#include <sstream>

class Int32 : public IOperand
{
    public:

    Int32(std::string);
    ~Int32() = default;
    std::string toString () const override;
    eOperandType getType () const override;
    IOperand* operator+(const IOperand &rhs) const override;
    IOperand* operator-(const IOperand &rhs) const override;
    IOperand* operator*(const IOperand &rhs) const override;
    IOperand* operator/(const IOperand &rhs) const override;
    IOperand* operator%(const IOperand &rhs) const override;

    private:
        int32_t _value;
};

#endif
