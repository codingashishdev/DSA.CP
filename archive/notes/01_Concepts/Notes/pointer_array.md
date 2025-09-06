### Pointing to Array Elements

We can use a pointer to point to any element of an array. Pointer arithmetic allows us to move between elements.

If a pointer `ptr` points to the first element of an array `arr`, then `ptr + i` will point to the `i`-th element (at index `i`).

```cpp
int *ptr;
int arr[5];

// Point to the first element
ptr = arr; // Equivalent to ptr = &arr[0];
```

- `ptr + 1` is equivalent to `&arr[1]`
- `ptr + 2` is equivalent to `&arr[2]`
- `ptr + 3` is equivalent to `&arr[3]`
- `ptr + 4` is equivalent to `&arr[4]`

Similarly, we can access the element's value using the dereference operator `*`.

- `*ptr` is equivalent to `arr[0]`
- `*(ptr + 1)` is equivalent to `arr[1]`
- `*(ptr + 2)` is equivalent to `arr[2]`
- `*(ptr + 3)` is equivalent to `arr[3]`
- `*(ptr + 4)` is equivalent to `arr[4]`

If we initialize a pointer to a different element, the arithmetic still works relative to that position. For `ptr = &arr[2]`:

- `ptr - 2` is equivalent to `&arr[0]`
- `ptr - 1` is equivalent to `&arr[1]`
- `ptr + 1` is equivalent to `&arr[3]`
- `ptr + 2` is equivalent to `&arr[4]`

**Note on Pointer Arithmetic:** The address between `ptr` and `ptr + 1` differs by `sizeof(*ptr)`. For an `int` pointer on a 64-bit system, this is typically 4 bytes. For a `char` pointer, it would be 1 byte.

### Array Names as Pointers

In most contexts, an array's name decays into a pointer to its first element. This is why we can use pointer notation directly with the array name.

However, pointers and arrays are not identical. There are cases where array names do not decay to pointers.

### Examples

#### Example 1: Displaying Element Addresses

This program demonstrates that `&arr[i]` and `ptr + i` (where `ptr = arr`) refer to the same memory addresses.

```cpp
// C++ Program to display address of each element of an array
#include <iostream>
using namespace std;

int main() {
    float arr[3];
    float *ptr;

    cout << "Displaying address using array notation:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout << "\nDisplaying address using pointer notation:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    return 0;
}
```

**Output**

```
Displaying address using array notation:
&arr[0] = 0x61fef0
&arr[1] = 0x61fef4
&arr[2] = 0x61fef8

Displaying address using pointer notation:
ptr + 0 = 0x61fef0
ptr + 1 = 0x61fef4
ptr + 2 = 0x61fef8
```

#### Example 2: Accessing Elements Using Pointer Notation

This program uses the array name `arr` with pointer notation to get input from the user and display the array elements.

```cpp
// C++ Program to insert and display data using pointer notation.
#include <iostream>
using namespace std;

int main() {
    float arr[5];

    // Insert data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        // store input number in arr[i]
        cin >> *(arr + i);
    }

    // Display data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {
        // display value of arr[i]
        cout << *(arr + i) << endl;
    }

    return 0;
}
```

**Output**

```
Enter 5 numbers: 2.5
3.5
4.5
5
2
Displaying data: 
2.5
3.5
4.5
5
2
```

Here, `*(arr + i)` is used instead of `arr[i]`. Since the array name `arr` decays to a pointer to its first element, this is a valid way to access its elements.
- `cin >> *(arr + i);` is equivalent to `cin >> arr[i];`
- `cout << *(arr + i);` is equivalent to `cout << arr[i];`
