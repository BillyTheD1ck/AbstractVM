/*
** EPITECH PROJECT, 2022
** float.cpp
** File description:
** Created by tpautier,
*/

#include "float.hpp"
#include "Exception.hpp"

Float::Float(std::string val)
{
    if (std::stold(val) < FLT_MIN)
        throw Exception("Error : float underflow.");
    if (std::stold(val) > FLT_MAX)
        throw Exception("Error : float overflow.");
    _value = std::stof(val);
}

eOperandType Float::getType() const
{
    return FLOAT;
}

std::string Float::toString() const
{
    std::ostringstream ss;
    ss << _value;
    std::string s(ss.str());
    return s;
}

IOperand* Float::operator+(const IOperand &rhs) const
{
    float val = _value + std::stof(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Float(s);
}

IOperand* Float::operator-(const IOperand &rhs) const
{
    float val = std::stof(rhs.toString()) - _value;

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Float(s);
}

IOperand* Float::operator*(const IOperand &rhs) const
{
    float val = _value * std::stof(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Float(s);
}

IOperand* Float::operator/(const IOperand &rhs) const
{
    float val = std::stof(rhs.toString()) / _value;

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Float(s);
}

IOperand* Float::operator%(const IOperand &rhs) const
{
    float val = fmod(std::stof(rhs.toString()), _value);

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Float(s);
}