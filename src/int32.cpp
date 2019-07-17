/*
** EPITECH PROJECT, 2022
** int32.cpp
** File description:
** Created by Ervin,
*/

#include "int32.hpp"
#include "Exception.hpp"

Int32::Int32(std::string val)
{
    if (std::stol(val) < -2147483648)
        throw Exception("Error : int32 underflow.");
    if (std::stol(val) > 2147483647)
        throw Exception("Error : int32 overflow.");
    _value = std::stoi(val);
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

IOperand* Int32::operator+(const IOperand &rhs) const
{
    int32_t val = _value + std::stoi(rhs.toString());

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int32(s);
}

IOperand* Int32::operator-(const IOperand &rhs) const
{
    int32_t val = std::stoi(rhs.toString()) - _value;

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
    int32_t val = std::stoi(rhs.toString()) % _value;

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int32(s);
}

IOperand* Int32::operator/(const IOperand &rhs) const
{
    int32_t val = std::stoi(rhs.toString()) / _value;

    std::ostringstream ss;
    ss << val;
    std::string s(ss.str());
    return new Int32(s);
}