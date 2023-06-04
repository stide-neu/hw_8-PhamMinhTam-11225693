#include <stdio.h>
struct student
{
  char name[20];
  int eng;
  int math;
  int phys;
 
};
int main ()
{
    
  struct student stu;

  printf ("enter name of student\n");
 
  scanf ("%s",stu.name);
  printf ("\nenter marks in english= ");
  scanf ("%d",&stu.eng);
  printf ("\nenter marks in math= ");
  scanf ("%d",&stu.math);
  printf ("\nenter marks in physics= ");
  scanf ("%d",&stu.phys);


return 0;
}
        
        
    
