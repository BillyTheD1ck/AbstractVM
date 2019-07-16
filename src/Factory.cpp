/*
** EPITECH PROJECT, 2022
** Factory.cpp
** File description:
** Created by tpautier,
*/

#include "Factory.h"

Factory::Factory()
{
    operands_str["INT8"] = INT8;
    operands_str["INT16"] = INT16;
    operands_str["INT32"] = INT32;
    operands_str["FLOAT"] = FLOAT;
    operands_str["DOUBLE"] = DOUBLE;
    operands_str["BIGDECIMAL"] = BIGDECIMAL;
    operands[INT8] = &Factory::createInt8;
    operands[INT16] = &Factory::createInt16;
    operands[INT32] = &Factory::createInt32;
    operands[FLOAT] = &Factory::createFloat;
    operands[DOUBLE] = &Factory::createDouble;
    operands[BIGDECIMAL] = &Factory::createBigDecimal;
}

std::map<eOperandType, IOperand *(Factory::*)(const std::string &value)> Factory::getOperants()
{
    return operands;
}

IOperand* Factory::createOperand(eOperandType type, const std::string &value)
{
    Factory *factory;
    IOperand *(Factory::*f)(const std::string &value);
    f = factory->getOperants().at(type);
    return ((*factory.*f)(value));
}

IOperand* Factory::createInt8(const std::string &value)
{
    return new Int8(value);
}

IOperand* Factory::createInt16(const std::string &value)
{
    return new Int16(value);
}

IOperand* Factory::createInt32(const std::string &value)
{
    return new Int32(value);
}

IOperand* Factory::createFloat(const std::string &value)
{
    return new Float(value);
}

IOperand* Factory::createDouble(const std::string &value)
{
    return new Double(value);
}

IOperand* Factory::createBigDecimal(const std::string &value)
{
    return new BigDecimal(value);
}