/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <string>
#include "Exception.hpp"

Exception::Exception(std::string const& message) throw()
    : message(message)
{
}

const char* Exception::what() const throw()
{
  return (this->message.c_str());
}
