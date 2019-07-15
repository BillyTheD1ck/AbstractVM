/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <vector>
#include <string>

#ifndef PARSING_HPP_
#define PARSING_HPP_

class Parsing
{
    public:
        Parsing(int ac, char **av);
        ~Parsing();
        std::vector<std::string> getInstructions();
    private:
        std::vector<std::string> _instructions;
};

#endif
