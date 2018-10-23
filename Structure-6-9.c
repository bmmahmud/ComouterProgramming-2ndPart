/******************************************************************************
Structure and union- Chapter -6
*******************************************************************************/
#include <stdio.h>
#include <string.h> 

typedef struct 
{
  char first[20];
  char last[20];
}nametype; 

typedef struct 
{
  int id;
  struct nametype name;
}strudenttype;

void calculate_grade(strudenttype* s, int mark){
    if(mark>=80){strcpy(s->grade,"A+");}
    else if(mark>=70){strcpy(s->grade,"A");}
    else if(mark>=60){strcpy(s->grade,"A-");}
    else if(mark>=50){strcpy(s->grade,"B");}
    else if(mark>=40){strcpy(s->grade,"C");}
    else{strcpy(s->grade,"A+");}
    }

int
main ()
{
strudenttype student[3];
int i, n=3;
for(i=0;i<n;i++){
  printf("Enter Id:");
  scanf("%d",&student[i].id);
  printf("Enter First Name:"); 
  scanf("%s",student[i].name.first);
  printf("Enter Last Name:"); 
  scanf("%s",one.name.last);
  strcpy(student[i],grade,"");
}
 for(i=0,i<n;i++){
     calculate_grade(&student[i].mark[i]);
 }
 printf("Output:");
 for(i=0;i<n;i++){
  printf("ID: %d\n First name: %s\n Last Name: %s",student[i].id,student[i].name.first,student[i].name.last);
}

  return 0;
}

