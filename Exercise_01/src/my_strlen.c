/*
** EPITECH PROJECT, 2022
** workshop-makefile
** File description:
** my_strlen
*/

#include "hello_world_printer.h"

int my_strlen(char *str)
{
    return ((*str != 0) ? my_strlen(str + 1) + 1 : 0);
}