#include <stdio.h>

int main()
{
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'}; // Character values take up only one byte of space, as they need two hex values to span the ASCII range.
    int int_array[5] = {1,2,3,4,5}; // Integer values take 4 bytes to include large numbers.

    char *char_ptr; // Initialize a character pointer.
    int *int_ptr; // Initialize an integer pointer.

    char_ptr = (char *) int_array; // The value of 'int_array' is typecasted into a char pointer to avoid warnings.
    int_ptr = (int *) char_array; // The value of 'char_array' is typecasted into an int pointer to avoid warnings.
    // It should be said that the above operations will do nothing to fix bad pointer arithmetic. They will still increment memory addresses incorrectly!


    for(int i = 0; i < sizeof(char_array); i++)
    {
        printf("[Integer Pointer]\t points to address %p, which contains the character %c\n", int_ptr, *int_ptr); // Prints the pointer's value, a memory address, and the value that the memory address holds.
        int_ptr = (int *) ((char *)int_ptr + 1); 
        // The 'int pointer' type is first typecasted into a 'char pointer'.
        // The 'char pointer' is then incremented decimal 1, which is really 1 byte, the correct memory incremental value.
        // The resultant incremented memory address pointer needs to be retypecasted into an 'int pointer' to be reassigned to int_ptr.
    }
    for(int i = 0; i < sizeof(char_array); i++)
    {
        printf("[Character Pointer]\t points to address %p, which contains the integer %d\n", char_ptr, *char_ptr); // Ditto as above.
        char_ptr = (char *)((int *)char_ptr + 1);
        // The 'char pointer' type is first typecasted into a 'int pointer'.
        // The 'int pointer' is then incremented decimal 1, which is really 4 bytes, the correct memory incremental value.
        // The resultant incremented memory address pointer needs to be retypecasted into an 'char pointer' to be reassigned to char_ptr.
    }
}