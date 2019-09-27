#include <stdio.h>
#include <stdlib.h>

//prototipe
int summm(int a);

int main (int argc, char* argv[])
    {
    if (argc != 2)
        return -1;
    printf("sum %i\n", summm(atoi(argv[1])));
    }
    
int summm(int a)
    {
    if (a<=0)
        return 0;
    return (a+summm(a-1));
    }
