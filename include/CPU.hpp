/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <vector>
#include <map>
#include <sstream>
#include "IOperand.hpp"
#include "Factory.h"
#include "Memory.hpp"
#include "Register.hpp"
#include "Exception.hpp"

#ifndef CPU_HPP_
#define CPU_HPP_

class CPU
{
    public:
        CPU();
        ~CPU() = default;

        void executeInstruction(std::vector<std::string> instruction);

    void setValue(const std::string &value) {_value = value;}
    void setValueType(const std::string &value) {_valueType = value;}
    void setReturnValue(const std::string &value) {_returnValue = value;}
    std::string &getReturnValue() {return _returnValue;}

    private:

        void push();
        void pop();
        void clear();
        void dup();
        void swap();
        void dump();
        void assert();
        void load();
        void store();
        void print();
        void add();
        void sub();
        void mul();
        void div();
        void mod();
        void exit();

        Memory _memory;
        Register _register;
        std::string _valueType;
        std::string _value;
        std::string _returnValue;
        std::map<std::string, void (CPU::*)(void)> _commands;
        std::map<std::string, eOperandType> _operandTypes;
};

#endif