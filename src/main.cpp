/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include "IOManager.hpp"
#include "Exception.hpp"
#include "Register.hpp"

int main(int ac, char **av)
{
    try {
        IOManager parsing(ac, av);
    }
    catch(std::exception const &e) {
        std::cerr << e.what() << std::endl;
        return (84);
    }
    return (0);

}
