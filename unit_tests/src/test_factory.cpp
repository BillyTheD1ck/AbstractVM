/*
** EPITECH PROJECT, 2019
** test1.cpp
** File description:
** truc
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "Factory.h"
#include "Exception.hpp"

Test(createOperand, int32)
{
    Factory factory = Factory();
    std::string str = "12";
    IOperand *op = factory.createOperand(INT32, str);
    cr_assert_eq(op->toString(), "12");
    cr_assert_eq(op->getType(), INT32);
}

Test(createOperand, int16)
{
    Factory factory = Factory();
    std::string str = "200";
    IOperand *op = factory.createOperand(INT16, str);
    cr_assert_eq(op->toString(), "200");
    cr_assert_eq(op->getType(), INT16);
}

Test(createOperand, int8)
{
    Factory factory = Factory();
    std::string str = "42";
    IOperand *op = factory.createOperand(INT8, str);
    cr_assert_eq(op->toString(), "42");
    cr_assert_eq(op->getType(), INT8);
}

Test(createOperand, int8_overflow)
{
    Factory factory = Factory();
    std::string str = "128";
    cr_assert_throw(factory.createOperand(INT8, str), Exception);
}

Test(createOperand, int8_underflow)
{
    Factory factory = Factory();
    std::string str = "-129";
    cr_assert_throw(factory.createOperand(INT8, str), Exception);
}

Test(createOperand, int16_overflow)
{
    Factory factory = Factory();
    std::string str = "32768";
    cr_assert_throw(factory.createOperand(INT16, str), Exception);
}

Test(createOperand, int16_underflow)
{
    Factory factory = Factory();
    std::string str = "-32869";
    cr_assert_throw(factory.createOperand(INT16, str), Exception);
}

Test(createOperand, int32_overflow)
{
    Factory factory = Factory();
    std::string str = "-2147483649";
    cr_assert_throw(factory.createOperand(INT32, str), Exception);
}

Test(createOperand, int32_underflow)
{
    Factory factory = Factory();
    std::string str = "2147483648";
    cr_assert_throw(factory.createOperand(INT32, str), Exception);
}