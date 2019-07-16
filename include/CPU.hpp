/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <vector>
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

        void push(IOperand *);
        void pop();
        void clear();
        void dup();
        void swap();
        void dump();
        void assert(IOperand *);
        void load(IOperand *);
        void store(IOperand *);
        void print();
        void add();
        void sub();
        void mul();
        void div();
        void mod();
        void exit();

    private:
        Memory _memory;
        Register _register;
};

#endif