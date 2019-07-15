/*
** EPITECH PROJECT, 2019
**
** File description:
**
*/

#include <vector>
#include <string>

#ifndef ABSTRACTVM_HPP_
#define ABSTRACTVM_HPP_

class abstractVM
{
    public:
        abstractVM(int ac, char **av);
        ~abstractVM();
        void fromFile(char *arg);
        void fromInput();
    private:
};

#endif
