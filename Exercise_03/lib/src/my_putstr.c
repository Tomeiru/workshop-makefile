/*
** EPITECH PROJECT, 2022
** workshop-makefile
** File description:
** my_putstr
*/

#include <unistd.h>

#include "my.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}