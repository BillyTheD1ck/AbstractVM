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
#include "Memory.hpp"
#include "Register.hpp"

#ifndef CPU_HPP_
#define CPU_HPP_

class CPU
{
    public:
        CPU();
        ~CPU() = default;

        void executeInstruction(std::vector<std::string> instruction);

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

    void setValue(const std::string &value) {_value = value;}
    void setValueType(const std::string &value) {_valueType = value;}
    void setReturnValue(const std::string &value) {_returnValue = value;}
    const std::string &get_returnValue() const {return _returnValue;}

    private:

        Memory _memory;
        Register _register;
        std::string _valueType;
        std::string _value;
        std::string _returnValue;
        std::map<std::string, void (CPU::*)(void)> _commands;
};

#endif