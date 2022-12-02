/*
** EPITECH PROJECT, 2022
** workshop-makefile
** File description:
** tests_use_add_sub
*/

#include <criterion/criterion.h>
#include <add_of_adds.h>

Test(demonstration, add_of_adds_test)
{
    cr_assert_eq(add_of_adds(3, 7), 20);
}