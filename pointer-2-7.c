//pointer Chapter-2
#include <stdio.h>
main ()
{
  int x = 10;
  int y;
  int *p,*q;

  p=&x;
  //q=&y;
  y=*p;
  *p=15;
  *q=20;
  
  printf ("Value of x: %d\n",x);
  printf("Value of y : %d\n",y);
  printf("Value of *p: %d\n",*p);
  printf ("value of *q: %d\n",*q);
    
}
