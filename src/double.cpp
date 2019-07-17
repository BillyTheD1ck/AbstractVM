/*
** EPITECH PROJECT, 2022
** double.cpp
** File description:
** Created by tpautier,
*/

#include "double.hpp"
#include "Exception.hpp"

Double::Double(std::string val)
{
    if (std::stold(val) < DBL_MIN)
        throw Exception("Error : double underflow.");
    if (std::stold(val) > DBL_MAX)
        throw Exception("Error : double overflow.");
    _value = std::stod(val);
}

std::string Double::toString() const
{
    std::ostringstream ss;
    ss << _value;
    std::string s(ss.str());
    return s;
}

eOperandType Double::getType() const
{
    return DOUBLE;
}

IOperand* Double::operator+(const IOperand &rhs) const
{
    double val = _value + std::stod(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Double(s);
}

IOperand* Double::operator-(const IOperand &rhs) const
{
    double val = std::stod(rhs.toString()) - _value;

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Double(s);
}

IOperand* Double::operator*(const IOperand &rhs) const
{
    double val = _value * std::stod(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Double(s);
}

IOperand* Double::operator%(const IOperand &rhs) const
{
    double val = fmod(std::stod(rhs.toString()), _value);

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Double(s);
}

IOperand* Double::operator/(const IOperand &rhs) const
{
    double val = std::stod(rhs.toString()) / _value;

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Double(s);
}