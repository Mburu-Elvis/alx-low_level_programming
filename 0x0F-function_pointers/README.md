# 0x0F-function_pointers

---

`function pointers` are basically pointers to functions

**declaration** <br>
>- type_name (*variable)(types for the parameters in the function to be pointed to);

**Example**<br>

<code>

void fun(int a)
{
	printf("%d\n", a);
}
int main()
{
	void (*func_ptr)(int);

	func_ptr = &fun;
	(*func_ptr)(10);
	return (0)
}

</code>

- function pointers point to code not data
- we don't allocate and deallocate memory using function pointers
- a function's name can be used to get its address

>- func_ptr = fun;

- we can have an array of function pointers
- function poiters can be passed as an argument

## Project Tasks

1. ### 0-print_name.c
- a function `print_name` that prints a name

2. ### 1-array_iterator.c
- a function `array_iterator` that executes a function given as a parameter on each element of an array

