/*
** EPITECH PROJECT, 2022
** workshop-makefile
** File description:
** use_add_sub
*/

#include "my.h"

int add_of_adds(int a, int b)
{
    return (add(add(a, b), add(a, b)));
}