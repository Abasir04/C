#include <stdio.h>
#include <stdlib.h>
int main()
{
    int index = 1;
    while(index <= 10)
    {
    char name[20];
    printf("Enter name for student%d: ", index);
    fgets(name, 20, stdin);
    index++;
    }

    return 0;
}
