/*
** EPITECH PROJECT, 2022
** int8.cpp
** File description:
** Created by Ervin,
*/

#include "../include/int8.hpp"

Int8::Int8(int_8 val)
{
    _value = val;
}

Int8::~Int8()
{
}

IOperand* Int8::operator-(const IOperand &rhs) const
{
        return (rhs - _value);
}

IOperand* Int8::operator+(const IOperand &rhs) const
{
    if (rhs.getType() == INT8)
        return (rhs + _value);
}

IOperand* Int8::operator*(const IOperand &rhs) const
{
    if (rhs.getType() == INT8)
        return (rhs * _value);
}

IOperand* Int8::operator%(const IOperand &rhs) const
{
    if (rhs.getType() == INT8)
        return (rhs % _value);
}

IOperand* Int8::operator/(const IOperand &rhs) const
{
    if (rhs.getType() == INT8)
        return (rhs / _value);
}