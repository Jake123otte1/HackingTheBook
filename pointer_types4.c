#include <stdio.h>

int main()
{
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'}; // Character values take up only one byte of space, as they need two hex values to span the ASCII range.
    int int_array[5] = {1,2,3,4,5}; // Integer values take 4 bytes to include large numbers.

    void *void_ptr; // This type of pointer has no data type. It is useful for storing memory addresses, but cannot be resolved until it is typecasted.

    void_ptr = (void *) char_array; // Yes, for some reason you need to void typecast any referenced addresses.

    printf("%x",sizeof(int));
    printf("%x",sizeof(unsigned int));
    for(int i = 0; i < sizeof(char_array); i++)
    {
        printf("[Character Array]\t Void pointer points to address %p, which contains the character %c\n", void_ptr, *((char *)void_ptr));
        // First we print the void pointer's pointed address, then typecast it as a character pointer in order to point to character data.

        void_ptr = (void *)((char *)void_ptr + 1);
        // Pretty standard - we need to typecast the void pointer as a character pointer in order to correctly increment the address. Then typecast back to void.
    }


    void_ptr = (void *) int_array; // Yes, for some reason you need to void typecast any referenced addresses.

    for(int i = 0; i < sizeof(char_array); i++)
    {
        printf("[Integery Array]\t Void pointer points to address %p, which contains the integer %d\n", void_ptr, *((int *)void_ptr));
        // First we print the void pointer's pointed address, then typecast it as a integery pointer in order to point to integer data.

        void_ptr = (void *)((int *)void_ptr + 1);
        // Pretty standard - we need to typecast the void pointer as a integery pointer in order to correctly increment the address. Then typecast back to void.
    }
}