/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <vector>
#include "IOperand.hpp"

#ifndef IOMANAGER_HPP_
#define IOMANAGER_HPP_

class IOManager
{
    public:
        IOManager();
        ~IOManager() = default;

    private:
        std::vector<std::string> _inputs;
        std::vector<std::string> _outputs;
};

#endif