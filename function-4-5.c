/******************************************************************************
Lecture-4: Function- Recursion
*******************************************************************************/
#include <stdio.h>

void recursion()
{
    
    char *s = "Hurry I am learning recursion";
    printf("%s\n",s);

    recursion();
}
int main()
{
recursion();
    return 0;
}



