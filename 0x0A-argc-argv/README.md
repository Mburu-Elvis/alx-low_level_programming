# 0x0A-argc-argv

## arguments to main
- argc - it's a count of the number of arguments supplied to the program
- argv - it's an array of string pointers which are arguments of the program
>- argv[0] - it's a pointer to the string containing the name of the program

The program will always have atleast 1 argument, the name of the program

1. ## 0-whatsmyname.c
- a program that prints it's name

2. ## 1-args.c
- a program that prints the number of arguments passed into it

3. ## 2-args.c
- a program that prints all the arguments it receives
>- one argument is printed per line

4. ## 3-mul.c
- a program that multiplies two numbers
- ***Assumption***
>- two numbers will be passed
>- result can be stored in an integer
- result
>- if program receives two arguments print `Error`, return 1
>- else
>>- print the result of multiplication
