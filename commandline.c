#include <stdio.h>

int main(int arg_count, char *arg_list[])
{
    printf("%p\n",arg_list[0]);
    printf("%x\n",*arg_list[0]);
    printf("%c\n",*arg_list[0]);
    printf("There were %d arguments provided:\n", arg_count);
    for(int i=0; i<arg_count; i++)
    {
        printf("argument #%d\t-\t%s\n", i, arg_list[i]);
    }
}