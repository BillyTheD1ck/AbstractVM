/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include "CPU.hpp"

CPU::CPU()
{
    _memory = Memory();
    _register = Register();
    _commands["push"] = &CPU::push;
    _commands["pop"] = &CPU::pop;
    _commands["clear"] = &CPU::clear;
    _commands["dup"] = &CPU::dup;
    _commands["swap"] = &CPU::swap;
    _commands["dump"] = &CPU::dump;
    _commands["assert"] = &CPU::assert;
    _commands["load"] = &CPU::load;
    _commands["store"] = &CPU::store;
    _commands["print"] = &CPU::print;
    _commands["add"] = &CPU::add;
    _commands["sub"] = &CPU::sub;
    _commands["mul"] = &CPU::mul;
    _commands["div"] = &CPU::div;
    _commands["mod"] = &CPU::mod;
    _commands["exit"] = &CPU::exit;
}

void CPU::push()
{
}

void CPU::pop()
{
}

void CPU::clear()
{
}

void CPU::dup()
{
}

void CPU::swap()
{
}

void CPU::dump()
{
}

void CPU::assert()
{
}

void CPU::load()
{
}

void CPU::store()
{
}

void CPU::print()
{
}

void CPU::add()
{
}

void CPU::sub()
{
}

void CPU::mul()
{
}

void CPU::div()
{
}

void CPU::mod()
{
}

void CPU::exit()
{
}
