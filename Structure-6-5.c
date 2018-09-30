/******************************************************************************

Structure and union- Chapter -6

*******************************************************************************/
#include <stdio.h>
struct nametype
{
  char first[20];
  char last[20];
}; 

struct strudent
{
  int id;
  struct nametype name;
};

int
main ()
{
  struct strudent one;
  scanf("%d",&one.id);
  scanf("%s",one.name.first);
  scanf("%s",one.name.last);
  printf("ID: %d\n First name: %s\n Last Name: %s",one.id,one.name.first,one.name.last);


  return 0;
}
