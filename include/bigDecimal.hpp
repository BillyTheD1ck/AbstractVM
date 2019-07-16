/*
** EPITECH PROJECT, 2022
** bigDecimal.hpp
** File description:
** Created by tpautier,
*/

#ifndef BIGDECIMAL_HPP
#define BIGDECIMAL_HPP

#include "IOperand.hpp"

class BigDecimal : public IOperand
{
    public:

    BigDecimal() = default;
    ~BigDecimal() override = default;
};

#endif
