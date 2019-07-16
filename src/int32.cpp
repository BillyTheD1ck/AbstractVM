/*
** EPITECH PROJECT, 2022
** int32.cpp
** File description:
** Created by Ervin,
*/

#include "../include/int32.hpp"

Int32::Int32(std::string val)
{
    _value = std::stoi(val);
}

Int32::~Int32()
{
}

std::string Int32::toString() const
{
    std::ostringstream ss;
    ss << _value;
    std::string s(ss.str());
    return s;
}

eOperandType Int32::getType() const
{
    return INT32;
}

IOperand* Int32::operator-(const IOperand &rhs) const
{
    int32_t val = _value - std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int32(s);
}

IOperand* Int32::operator+(const IOperand &rhs) const
{
    int32_t val = _value + std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int32(s);
}

IOperand* Int32::operator*(const IOperand &rhs) const
{
    int32_t val = _value * std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int32(s);
}

IOperand* Int32::operator%(const IOperand &rhs) const
{
    int32_t val = _value / std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int32(s);
}

IOperand* Int32::operator/(const IOperand &rhs) const
{
    int32_t val = _value / std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int32(s);
}