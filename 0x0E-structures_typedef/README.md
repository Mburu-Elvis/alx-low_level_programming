# 0x0E-structures_typedef

---

a structure is a user defined data type that allows combining data items of different kinds

**typedef** is used to give a type a new name/synonym

## 1. dog.h
- a struct dog with elements
>- `name`, type `char *`
>- `age`, type `float`
>- `owner`, type `char *`

## 2. 1-init_dog.c
- a function `init_dog` that initializes a variable of type `struct dog`

## 3. 2-print_dog.c
- a function `print_dog` that prints a `struct dog`

## 4. dog.h
- defining a new type `dog_t` as the new name for `struct dog`

## 5. 4-new_dog.c
- a function `new_dog` that creates a new dog

## 6. 5-free_dog.c
- a function `free_dog` that frees dogs
