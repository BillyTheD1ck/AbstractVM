/*
** EPITECH PROJECT, 2022
** bigDecimal.cpp
** File description:
** Created by Ervin,
*/

#include "../include/bigDecimal.hpp"

BigDecimal::BigDecimal(std::string val)
{
    for (unsigned int i = 0; i < val.size(); i++) {
        if (val.at(i) == ',')
            _coma = i;
        else
            _bigInt.push_back(val.at(i));
    }
}

std::string BigDecimal::toString() const
{
    std::string res;

    for (unsigned int i = 0; i < _bigInt.size(); i++) {
        if (i == _coma)
            res.push_back(',');
        res.push_back(_bigInt.at(i));
    }
    return res;
}

eOperandType BigDecimal::getType() const
{
    return BIGDECIMAL;
}

IOperand* BigDecimal::operator+(const IOperand &rhs) const
{
    return new BigDecimal(rhs.toString());
}

IOperand* BigDecimal::operator-(const IOperand &rhs) const
{
    return new BigDecimal(rhs.toString());
}

IOperand* BigDecimal::operator*(const IOperand &rhs) const
{
    return new BigDecimal(rhs.toString());
}

IOperand* BigDecimal::operator/(const IOperand &rhs) const
{
    return new BigDecimal(rhs.toString());
}

IOperand* BigDecimal::operator%(const IOperand &rhs) const
{
    return new BigDecimal(rhs.toString());
}