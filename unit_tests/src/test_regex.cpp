/*
** EPITECH PROJECT, 2019
** test1.cpp
** File description:
** truc
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "Chipset.hpp"
#include "Exception.hpp"

Test(getInstruction, push_int8_12)
{
    char **av = (char **)calloc(2, sizeof(char*));
    std::ofstream outfile (".test_file");

    av[0] = (char *)"./abstractVM";
    av[1] = (char *)".test_file";
    outfile.close();
    Chipset chipset = Chipset(2, av);
    std::string instruction = "push int8(12)";
    std::vector<std::string> vector = chipset.getInstruction(instruction);

    cr_assert_eq(vector.size(), 3);
    cr_assert_eq(vector.at(0), "push");
    cr_assert_eq(vector.at(1), "int8");
    cr_assert_eq(vector.at(2), "12");
}

Test(getInstruction, store_int32_13)
{
    char **av = (char **)calloc(2, sizeof(char*));
    std::ofstream outfile (".test_file");

    av[0] = (char *)"./abstractVM";
    av[1] = (char *)".test_file";
    outfile.close();
    Chipset chipset = Chipset(2, av);
    std::string instruction = "store int32(13)";
    std::vector<std::string> vector = chipset.getInstruction(instruction);

    cr_assert_eq(vector.size(), 3);
    cr_assert_eq(vector.at(0), "store");
    cr_assert_eq(vector.at(1), "int32");
    cr_assert_eq(vector.at(2), "13");
}

Test(getInstruction, load_int8_5)
{
    char **av = (char **)calloc(2, sizeof(char*));
    std::ofstream outfile (".test_file");

    av[0] = (char *)"./abstractVM";
    av[1] = (char *)".test_file";
    outfile.close();
    Chipset chipset = Chipset(2, av);
    std::string instruction = "load int8(5)";
    std::vector<std::string> vector = chipset.getInstruction(instruction);

    cr_assert_eq(vector.size(), 3);
    cr_assert_eq(vector.at(0), "load");
    cr_assert_eq(vector.at(1), "int8");
    cr_assert_eq(vector.at(2), "5");
}

Test(getInstruction, push_int16_100_comment)
{
    char **av = (char **)calloc(2, sizeof(char*));
    std::ofstream outfile (".test_file");

    av[0] = (char *)"./abstractVM";
    av[1] = (char *)".test_file";
    outfile.close();
    Chipset chipset = Chipset(2, av);
    std::string instruction = "push int16(100) ;la bite";
    std::vector<std::string> vector = chipset.getInstruction(instruction);

    cr_assert_eq(vector.size(), 3);
    cr_assert_eq(vector.at(0), "push");
    cr_assert_eq(vector.at(1), "int16");
    cr_assert_eq(vector.at(2), "100");
}

Test(getInstruction, dump)
{
    char **av = (char **)calloc(2, sizeof(char*));
    std::ofstream outfile (".test_file");

    av[0] = (char *)"./abstractVM";
    av[1] = (char *)".test_file";
    outfile.close();
    Chipset chipset = Chipset(2, av);
    std::string instruction = "dump";
    std::vector<std::string> vector = chipset.getInstruction(instruction);

    cr_assert_eq(vector.size(), 1);
    cr_assert_eq(vector.at(0), "dump");
}

Test(getInstruction, add)
{
    char **av = (char **)calloc(2, sizeof(char*));
    std::ofstream outfile (".test_file");

    av[0] = (char *)"./abstractVM";
    av[1] = (char *)".test_file";
    outfile.close();
    Chipset chipset = Chipset(2, av);
    std::string instruction = "add";
    std::vector<std::string> vector = chipset.getInstruction(instruction);

    cr_assert_eq(vector.size(), 1);
    cr_assert_eq(vector.at(0), "add");
}

Test(getInstruction, bad_command)
{
    char **av = (char **)calloc(2, sizeof(char*));
    std::ofstream outfile (".test_file");

    av[0] = (char *)"./abstractVM";
    av[1] = (char *)".test_file";
    outfile.close();
    Chipset chipset = Chipset(2, av);
    std::string instruction = "saucisson int16(42)";

    cr_assert_throw(chipset.getInstruction(instruction), Exception);
}

Test(getInstruction, bad_operand)
{
    char **av = (char **)calloc(2, sizeof(char*));
    std::ofstream outfile (".test_file");

    av[0] = (char *)"./abstractVM";
    av[1] = (char *)".test_file";
    outfile.close();
    Chipset chipset = Chipset(2, av);
    std::string instruction = "push saucisson(42)";

    cr_assert_throw(chipset.getInstruction(instruction), Exception);
}

Test(getInstruction, bad_value)
{
    char **av = (char **)calloc(2, sizeof(char*));
    std::ofstream outfile (".test_file");

    av[0] = (char *)"./abstractVM";
    av[1] = (char *)".test_file";
    outfile.close();
    Chipset chipset = Chipset(2, av);
    std::string instruction = "push int32(saucisson)";

    cr_assert_throw(chipset.getInstruction(instruction), Exception);
}