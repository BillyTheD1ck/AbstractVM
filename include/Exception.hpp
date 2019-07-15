/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include <string>
#include <exception>

class Exception : public std::exception
{
  std::string message;
  public:
  Exception(std::string const&) throw();
  ~Exception() throw() = default;
  const char *what() const throw();
};

#endif
