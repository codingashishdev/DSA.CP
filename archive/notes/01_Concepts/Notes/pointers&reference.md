1. 0x meaning the address is in hexadecimal form.

2. Whenever we print addresses of two variables, the first address differs from the second address by 4 bytes and the second address differs from the third address by 4 bytes and so on.

3. difference is because the size of an integer is 4 bytes in 64-bit system.

4. This is how we can declare pointers:

```cpp
int *p; // pointer to an integer
float *q; // pointer to a float
char *r; // pointer to a char
```
- we have declared a variable point_var which is a pointer to an int.

5. Assigning Addresses to Pointers

```cpp
int var = 5; // normal variable
int *point_var = &var; // the address of var is assigned to point_var
cout << *point_var; // dereferencing the pointer to get the value of var
// prints 5
```

6. When * is used with pointers, it's called the **dereference operator**. It operates on a pointer and gives the value pointed by the address stored in the pointer

7. A pointer in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable, but it does not have ownership.

![alt text](image.png)