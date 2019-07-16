/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <vector>
#include <map>
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

        void getInstruction();
        void getInstruction(std::string);

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

    void setArgument(const std::string &argument) {_argument = argument;}

    private:

        Memory _memory;
        Register _register;
        std::string _argument;
        std::string _returnValue;
        std::map<std::string, void (CPU::*)(void)> _commands;
};

#endif