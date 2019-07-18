/*
** EPITECH PROJECT, 2019
** test1.cpp
** File description:
** truc
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "CPU.hpp"
#include "Exception.hpp"

Test(executeInstruction, dump_double)
{
    CPU cpu = CPU();

    std::vector<std::string> vector;
    vector.push_back("push");
    vector.push_back("double");
    vector.push_back("21");

    std::vector<std::string> dump;
    dump.push_back("dump");

    cpu.executeInstruction(vector);
    cpu.executeInstruction(dump);
    cr_assert_eq(cpu.getReturnValue(), "21\n");
}

Test(executeInstruction, dump_int8)
{
    CPU cpu = CPU();

    std::vector<std::string> vector;
    vector.push_back("push");
    vector.push_back("int8");
    vector.push_back("69");

    std::vector<std::string> dump;
    dump.push_back("dump");

    cpu.executeInstruction(vector);
    cpu.executeInstruction(dump);
    cr_assert_eq(cpu.getReturnValue(), "E\n");
}

Test(executeInstruction, add_negative_int32)
{
    CPU cpu = CPU();

    std::vector<std::string> op1;
    op1.push_back("push");
    op1.push_back("int32");
    op1.push_back("10");

    std::vector<std::string> op2;
    op2.push_back("push");
    op2.push_back("int32");
    op2.push_back("-5");

    std::vector<std::string> add;
    add.push_back("add");

    std::vector<std::string> dump;
    dump.push_back("dump");

    cpu.executeInstruction(op1);
    cpu.executeInstruction(op2);
    cpu.executeInstruction(add);
    cpu.executeInstruction(dump);
    cr_assert_eq(cpu.getReturnValue(), "5\n");
}

Test(executeInstruction, ad_int8)
{
    CPU cpu = CPU();

    std::vector<std::string> op1;
    op1.push_back("push");
    op1.push_back("int8");
    op1.push_back("65");

    std::vector<std::string> op2;
    op2.push_back("push");
    op2.push_back("int8");
    op2.push_back("1");

    std::vector<std::string> add;
    add.push_back("add");

    std::vector<std::string> dump;
    dump.push_back("dump");

    cpu.executeInstruction(op1);
    cpu.executeInstruction(op2);
    cpu.executeInstruction(add);
    cpu.executeInstruction(dump);
    cr_assert_eq(cpu.getReturnValue(), "B\n");
}

Test(executeInstruction, sub_negative_int32)
{
    CPU cpu = CPU();

    std::vector<std::string> op1;
    op1.push_back("push");
    op1.push_back("int32");
    op1.push_back("10");

    std::vector<std::string> op2;
    op2.push_back("push");
    op2.push_back("int32");
    op2.push_back("-5");

    std::vector<std::string> sub;
    sub.push_back("sub");

    std::vector<std::string> dump;
    dump.push_back("dump");

    cpu.executeInstruction(op1);
    cpu.executeInstruction(op2);
    cpu.executeInstruction(sub);
    cpu.executeInstruction(dump);
    cr_assert_eq(cpu.getReturnValue(), "15\n");
}

Test(executeInstruction, mul_int16)
{
    CPU cpu = CPU();

    std::vector<std::string> op1;
    op1.push_back("push");
    op1.push_back("int32");
    op1.push_back("10");

    std::vector<std::string> op2;
    op2.push_back("push");
    op2.push_back("int32");
    op2.push_back("-5");

    std::vector<std::string> mul;
    mul.push_back("mul");

    std::vector<std::string> dump;
    dump.push_back("dump");

    cpu.executeInstruction(op1);
    cpu.executeInstruction(op2);
    cpu.executeInstruction(mul);
    cpu.executeInstruction(dump);
    cr_assert_eq(cpu.getReturnValue(), "-50\n");
}

Test(executeInstruction, div_int32)
{
    CPU cpu = CPU();

    std::vector<std::string> op1;
    op1.push_back("push");
    op1.push_back("int32");
    op1.push_back("10");

    std::vector<std::string> op2;
    op2.push_back("push");
    op2.push_back("int32");
    op2.push_back("-5");

    std::vector<std::string> div;
    div.push_back("div");

    std::vector<std::string> dump;
    dump.push_back("dump");

    cpu.executeInstruction(op1);
    cpu.executeInstruction(op2);
    cpu.executeInstruction(div);
    cpu.executeInstruction(dump);
    cr_assert_eq(cpu.getReturnValue(), "-2\n");
}

Test(executeInstruction, mod_int32)
{
    CPU cpu = CPU();

    std::vector<std::string> op1;
    op1.push_back("push");
    op1.push_back("int32");
    op1.push_back("22");

    std::vector<std::string> op2;
    op2.push_back("push");
    op2.push_back("int32");
    op2.push_back("5");

    std::vector<std::string> mod;
    mod.push_back("mod");

    std::vector<std::string> dump;
    dump.push_back("dump");

    cpu.executeInstruction(op1);
    cpu.executeInstruction(op2);
    cpu.executeInstruction(mod);
    cpu.executeInstruction(dump);
    cr_assert_eq(cpu.getReturnValue(), "2\n");
}