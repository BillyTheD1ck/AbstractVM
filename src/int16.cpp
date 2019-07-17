/*
** EPITECH PROJECT, 2022
** int16.cpp
** File description:
** Created by Ervin,
*/

#include "../include/int16.hpp"

Int16::Int16(std::string val)
{
    _value = std::stoi(val);
}

Int16::~Int16()
{
}

std::string Int16::toString() const
{
    std::ostringstream ss;
    ss << _value;
    std::string s(ss.str());
    return s;
}

eOperandType Int16::getType() const
{
    return INT16;
}

IOperand* Int16::operator-(const IOperand &rhs) const
{
    int16_t val = _value - std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int16(s);
}

IOperand* Int16::operator+(const IOperand &rhs) const
{
    int16_t val = _value + std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int16(s);
}

IOperand* Int16::operator*(const IOperand &rhs) const
{
    int16_t val = _value * std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int16(s);
}

IOperand* Int16::operator%(const IOperand &rhs) const
{
    int16_t val = _value % std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int16(s);
}

IOperand* Int16::operator/(const IOperand &rhs) const
{
    int16_t val = _value / std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int16(s);
}