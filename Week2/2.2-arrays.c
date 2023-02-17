#include <stdio.h>

int main()
{
  //Create grades array and populate
  int myGrades[] = {75, 69, 65};

  int myNewGrades[7];

  int i;

  //Populate new grades and add matriculation number as the final entry
  for (i = 0; i < 3; i++)
  {
    myNewGrades[i] = myGrades[i];
  }

  myNewGrades[3] = 72;
  myNewGrades[4] = 64;
  myNewGrades[5] = 80;
  myNewGrades[6] = 40597266;

  for (i = 0; i < 7; i++)
  {

    if (i < 6)
    {
      printf("Grade: %d\n", myNewGrades[i]);
    }
    else
    {
      printf("Matriculation: %d\n", myNewGrades[i]);
    }
  }

  printf("Size of array: %zu bytes\n", sizeof(myNewGrades));

  return 0;

}
