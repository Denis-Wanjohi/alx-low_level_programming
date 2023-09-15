#include "function_pointers.h"
/**
 * print _name(char *name, void (*f) (char *)-function pointer
 * @name:value from main code
 * @f:pointer
 * Return-nothing
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
