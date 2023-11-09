#include <stdio.h>

int main()
{
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'}; // Character values take up only one byte of space, as they need two hex values to span the ASCII range.
    int int_array[5] = {1,2,3,4,5}; // Integer values take 4 bytes to include large numbers.

    unsigned int hacky_nonptr; // This initializes a variable of 4 byte length. It can be used to hold a memory address, even though it isnt a pointer!

    hacky_nonptr = (unsigned int) char_array; // Typecast to the 'pointer'

    for(int i = 0; i < sizeof(char_array); i++)
    {
        printf("[Character Array]\t Fake pointer points to address %p, which contains the character %c\n", hacky_nonptr, *((char *)hacky_nonptr));

        hacky_nonptr = hacky_nonptr + sizeof(char); // We have to manually increment the memory address in this case, as the 'pointer' isn't actually a pointer.
    }

    hacky_nonptr = (unsigned int) int_array; 

    for(int i = 0; i < sizeof(char_array); i++)
    {
        printf("[INteger Array]\t Fake pointer points to address %p, which contains the integer %d\n", hacky_nonptr, *((int *)hacky_nonptr));

        hacky_nonptr = hacky_nonptr + sizeof(int); // We have to manually increment the memory address in this case, as the 'pointer' isn't actually a pointer.
    }

}