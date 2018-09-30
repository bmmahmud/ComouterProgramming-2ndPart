/******************************************************************************
Lecture-4: Function- static
*******************************************************************************/
#include <stdio.h>

int a;
static int b;
void myFunction()
{
    
    a=b+1;
    b=b+1;
}
int main()
{
    myFunction();
    printf("a=%d \n",a);
    printf("b=%d \n",b);
    return 0;
}


