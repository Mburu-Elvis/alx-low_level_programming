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

3. ### 2-int_index.c
- a function `int_index` that searches for an integer
>- `size` is the number of elements of in the array
>- `cmp` is a pointer to the function to be used to compare values
>- `int_index` returns the index of the first element for which the `cmp` function does not return `0`
