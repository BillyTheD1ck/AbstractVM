/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include "abstractVM.hpp"
#include "Exception.hpp"

int main(int ac, char **av)
{
    try {
        abstractVM parsing(ac, av);
    }
    catch(std::exception const &e) {
        std::cerr << e.what() << std::endl;
        return (84);
    }
    return (0);

}
