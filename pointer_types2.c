#include <stdio.h>

int main()
{
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'}; // Character values take up only one byte of space, as they need two hex values to span the ASCII range.
    int int_array[5] = {1,2,3,4,5}; // Integer values take 4 bytes to include large numbers.

    char *char_ptr; // Initialize a character pointer.
    int *int_ptr; // Initialize an integer pointer.

    char_ptr = int_array; // The character pointer points to the first memory address of the INTEGER array.
    int_ptr = char_array; // The integer pointer points to the first memory address of the CHARACTER array.

    for(int i = 0; i < sizeof(char_array); i++)
    {
        printf("[Integer Pointer]\t points to address %p, which contains the character %c\n", int_ptr, *int_ptr); // Prints the pointer's value, a memory address, and the value that the memory address holds.
        int_ptr = int_ptr + 1; // Although the value of 1 is added to int_ptr, the memory address is incremented by four bytes because the pointer has a 'type' of int.
    }
    for(int i = 0; i < sizeof(char_array); i++)
    {
        printf("[Character Pointer]\t points to address %p, which contains the integer %d\n", char_ptr, *char_ptr); // Ditto as above.
        char_ptr = char_ptr + 1; // The value of only decimal 1 is added here, but the memory address is incremented by 1 byte because of the pointer type 'character'.
    }
}