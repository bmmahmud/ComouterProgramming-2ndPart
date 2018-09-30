
#include <stdio.h>

int main()
{
    char c = 'A';
    char *p,**p;
    
    p=&c;
    q=&p;
    **q='B';
    
    printf("Value of c: %c\n",c);
    printf("Value of c: %c",*p);
    printf("Value of c: %c\n",**q);
    

    return 0;
}
