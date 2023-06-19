# 0x0D-preprocessor

---

preprocessors are text replacers in general
it's a step executed before the source code is compiled
***preprocessor directives*** are typically used to make source programs easy to change and easy to compile

they include:-

- macros
- constants
- directives

they are preceded with a **#** symbol

Here are some programs that make different uses of preprocessor directives

## 1. 0-object_like_macro.h
- a header file that defines a macro ***SIZE*** as an abbreviation for the token ***1024***

## 2. 1-pi.h
- a header file defining a macro ***PI*** as an abbreviation for the token ***3.14159265359***

## 3. 2-main.c
- a program that prints the name of the file it was compiled from

## 4. 3-function_like_macro.h
- a function-like macro ***ABS(x)*** that computes the absolute value of a number ***x***

## 4. 4-sum.h
- a function-like macro ***SUM(x, y)*** that computes the sum of the numbers ***x*** and ***y***
