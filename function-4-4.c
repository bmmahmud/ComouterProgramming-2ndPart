/******************************************************************************
Lecture-4: Function- static
*******************************************************************************/
#include <stdio.h>

int a;
static int b;
void myFunction()
{
    
   int a=10;
   static int s=10;
   
   a=a+2;
   s=s+2;
   printf("a= %d, s =%d\n",a,s);
}
int main()
{
    myFunction();
    myFunction();
    myFunction();
    //printf("a=%d \n",a);
    //printf("b=%d \n",b);
    return 0;
}


