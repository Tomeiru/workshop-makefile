/*
** EPITECH PROJECT, 2022
** workshop-makefile
** File description:
** my_putstr
*/

#include <unistd.h>

#include "hello_world_printer.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}