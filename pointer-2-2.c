//pointer Chapter-2
#include <stdio.h>
main ()
{
  int x = 10;
  int *p;
  
  p=&x;
  
  printf ("*p =  %d\n",*p);
  printf ("Value of p is %p",p);
}
