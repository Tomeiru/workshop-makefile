/*
** EPITECH PROJECT, 2022
** workshop-makefile
** File description:
** my_putchar
*/

#include <unistd.h>

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}