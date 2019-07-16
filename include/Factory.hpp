/*
** EPITECH PROJECT, 2022
** Factory.hpp
** File description:
** Created by Ervin,
*/

#ifndef SYN_ABSTRACTVM_2018_FACTORY_HPP
#define SYN_ABSTRACTVM_2018_FACTORY_HPP
#include <map>
#include "IOperand.hpp"
#include "int8.hpp"
#include "int16.hpp"
#include "int32.hpp"
#include "float.hpp"
#include "double.hpp"
#include "bigDecimal.hpp"

class Factory
{
    public:

    Factory();
    ~Factory() = default;

    static IOperand *createOperand(eOperandType type, const std::string &value);
    std::map<eOperandType, IOperand *(Factory::*)(const std::string &value)> getOperants();

    private:

    IOperand *createInt8(const std::string &value);
    IOperand *createInt16(const std::string &value);
    IOperand *createInt32(const std::string &value);
    IOperand *createFloat(const std::string &value);
    IOperand *createDouble(const std::string &value);
    IOperand *createBigDecimal(const std::string &value);

    std::map<eOperandType, IOperand *(Factory::*)(const std::string &value)> operands;
    std::map<const std::string, eOperandType> operands_str;
};

#endif
