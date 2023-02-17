#include <stdio.h>

//Declare structure of data
typedef struct
{
  int id;
  char name[30];
} student;

int main()
{
  student s1 = {26235238, "Finlay Daniel Coull"};

  //Print output
  printf("ID: %d\nName: %s\n", s1.id, s1.name);

  //Print sizes
  printf("%zu %zu %zu \n", sizeof(s1.id), sizeof(s1.name), sizeof(s1));

  return 0;
}
