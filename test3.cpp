#include <stdio.h>
#include "myfunctions.h"

int main()
{
    char n1,n2,n3,n4;
    printf("Enter the Arrow keys : ");
    scanf("%c%c%c%c", &n1,&n2,&n3,&n4);

printf("character(left,right,up,down) -> %d,%d,%d,%d",n1,n2,n3,n4);
    return 0;
}