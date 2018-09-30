/******************************************************************************
Lecture-4: Function- Recursion-condition to stop
*******************************************************************************/
#include <stdio.h>

void recursion(int count)
{
    if(count==5){return;}
    
    printf("I am Learning recoursion\n");

    recursion(count+1);
    return;
}
int main()
{
recursion(1);
    return 0;
}



