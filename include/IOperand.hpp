/*
** EPITECH PROJECT, 2022
** IOperand.hpp
** File description:
** Created by tpautier,
*/

#ifndef IOPERAND_HPP
#define IOPERAND_HPP

#include <iostream>
#include <string>

enum eOperandType {
    INT8,
    INT16,
    INT32,
    FLOAT,
    DOUBLE,
    BIGDECIMAL
};

class IOperand
{
    public:

    virtual std::string toString () const =0;
    virtual eOperandType getType () const =0;
    virtual IOperand* operator+(const IOperand &rhs) const = 0;
    virtual IOperand* operator-(const IOperand &rhs) const = 0;
    virtual IOperand* operator*(const IOperand &rhs) const = 0;
    virtual IOperand* operator/(const IOperand &rhs) const = 0;
    virtual IOperand* operator%(const IOperand &rhs) const = 0;
    virtual ~ IOperand () = default;
};

#endif
