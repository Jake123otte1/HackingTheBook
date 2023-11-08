#include <stdio.h>
#include <string.h>

int main(){
    char str_a[20]; // A 20-element character array
    char *pointer; // A pointer, meant for a character array
    char *pointer2; // Another pointer

    strcpy(str_a, "Hello, world!\n");
    pointer = str_a; // Set the pointer to the start of the array
    printf(pointer);

    pointer2 = pointer + 2; // Set the second pointer 2 bytes further than the first pointer.
    printf(pointer2);
    strcpy(pointer2, "y you guys!\n"); // Copy into that spot
    printf(pointer); // Print again
}