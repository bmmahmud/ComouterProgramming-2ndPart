// Function-Global and local variable
#include <stdio.h>

int x=1;
void myFunction(int y)
{
    y=y*2;
    x= x+10;
    printf("My Function, x = %d, y =%d\n",x,y);
}
int main()
{
    int y =10;
    x=10;
    myFunction(30);
    printf("main, x=%d,y+%d\n",x,y);
    return 0;
}
