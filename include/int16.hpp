/*
** EPITECH PROJECT, 2022
** int16.hpp
** File description:
** Created by tpautier,
*/

#ifndef INT16_HPP
#define INT16_HPP

#include "IOperand.hpp"
#include <sstream>

class Int16 : public IOperand
{
    public:

    explicit Int16(std::string val);
    ~Int16() override = default;
    std::string toString () const override;
    eOperandType getType () const override;
    IOperand* operator+(const IOperand &rhs) const override;
    IOperand* operator-(const IOperand &rhs) const override;
    IOperand* operator*(const IOperand &rhs) const override;
    IOperand* operator/(const IOperand &rhs) const override;
    IOperand* operator%(const IOperand &rhs) const override;

    private:
        int16_t _value;
};

#endif
