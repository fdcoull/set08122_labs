#include <stdio.h>

#define MAX 5

//Declare initialise array function
void init(int* array)
{
  int idx;
  for (idx = 0; idx < MAX; idx++)
  {
    array[idx] = 0;
  }
}

//Declare display array function
void display(int* array)
{
  int idx;

  for (idx = 0; idx < MAX; idx++)
  {
    printf("%d\t", idx);
  }
  printf("\n");

  for (idx = 0; idx < MAX; idx++)
  {
    printf("%d\t", array[idx]);
  }
  printf("\n");
}

//Declare display array function
void insert(int* array, int pos, int num)
{
  int idx;

  for (idx = MAX - 1; idx >= pos; idx--)
  {
    array[idx] = array[idx-1];
  }
  array[idx] = num;
}

//Declare delete from array function
void delete(int* array, int pos)
{
  int idx;
  for (idx = pos; idx < MAX; idx++)
  {
    array[idx - 1] = array[idx];
  }
  array[idx - 1] = 0;
}

//Declare reverse array function
void reverse(int* array)
{
  int idx;
  for (idx = 0; idx < MAX / 2; idx++)
  {
    int temp = array[idx];
    array[idx] = array[MAX - 1 - idx];
    array[MAX - 1 - idx] = temp;
  }
}

//Declare search array function
void search(int* array, int num)
{
  int idx;
  for (idx = 0; idx < MAX; idx++)
  {
    if (array[idx] == num)
    {
      printf("%d found in position %d\n", num, idx + 1);
      return;
    }
  }
  if (idx == MAX)
  {
    printf("%d not found in array\n", num);
  }
}

int main(void)
{
  int array[MAX];

  //Initialise array
  init(array);

  //Populate array
  insert(array, 1, 21);
  insert(array, 2, 22);
  insert(array, 3, 23);
  insert(array, 4, 24);
  insert(array, 5, 25);

  //Edit array item
  insert(array, 1, 30);

  //Display contents
  printf("Original contents:\n");
  display(array);

  //Delete from array
  delete(array, 2);
  delete(array, 3);

  //Display contents
  printf("After deletion:\n");
  display(array);

  //Reverse array
  reverse(array);

  //Display contents
  printf("After reversal:\n");
  display(array);

  //Search array
  printf("Search for 30:\n");
  search(array, 30);

  return 0;
}
