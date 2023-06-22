# 0x10-variadic_functions

---

variadic functions are functions that take a variable number of arguments

`stdarg.h` is a header that allows functions to take indefinite number of arguments

variadic functions are declared as

> type_name func_name(type_name named_parameter, ...)

they must have atleast one named parameter

## stdarg.h types

1. <bold>va_list :</bold> - type for iterating arguments
2. <bold>va_start :</bold> - start iterating arguments with a `va_list`
3. <bold>va_arg :</bold> - retrieve an argument
4. <bold>va_end :</bold> - free a `va_list`
5. <bold>va_copy :</bold> - copy contents of one `va_list` to another

## Project Tasks

---

1. ### 0-sum_them_all.c
- a function `sum_them_all` that returns the sum of all its parameters

2. ### 1-print_numbers.c
- a function `print_numbers` that prints numbers
