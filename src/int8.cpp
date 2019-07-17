/*
** EPITECH PROJECT, 2022
** int8.cpp
** File description:
** Created by Ervin,
*/

#include "int8.hpp"
#include "Exception.hpp"

Int8::Int8(std::string val)
{
    if (std::atoi(val.c_str()) < -128)
        throw Exception("Error : int8 underflow.");
    if (std::atoi(val.c_str()) > 127)
        throw Exception("Error : int8 overflow.");

    int i = std::atoi(val.c_str());
    _value = i;
}

std::string Int8::toString() const
{
    std::ostringstream ss;
    ss << _value;
    std::string s(ss.str());
    return s;
}

eOperandType Int8::getType() const
{
    return INT8;
}

IOperand* Int8::operator+(const IOperand &rhs) const
{
    int val = _value + std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int8(s);
}

IOperand* Int8::operator-(const IOperand &rhs) const
{
    int val = _value - std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int8(s);
}

IOperand* Int8::operator*(const IOperand &rhs) const
{
    int val = _value * std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int8(s);
}

IOperand* Int8::operator%(const IOperand &rhs) const
{
    int val = _value % std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int8(s);
}

IOperand* Int8::operator/(const IOperand &rhs) const
{
    int val = _value / std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int8(s);
}