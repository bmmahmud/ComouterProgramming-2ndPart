/******************************************************************************

Structure and union- Chapter -6

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  struct student {
      int id;
      char name[40];
  };
  struct student one;
  one.id=1;
  strcpy(one.name,"i am akka");
  printf("Id= %d \n",one.id);
  printf("Name: %s\n",one.name);
  return 0;
}
