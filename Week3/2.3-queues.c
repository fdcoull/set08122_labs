#include <stdio.h>

#define MAX 10

void enqueue(int *arr, int item, int *pfront, int *prear)
{
  if (*prear == MAX - 1)
  {
    printf("Queue is full\n");
    return;
  }
  else
  {
    printf("Enqueuing: %d\n", item);
    (*prear)++;
    arr[*prear] = item;

    if (*pfront == -1)
    {
      *pfront = 0;
    }
  }
}

int empty(int *pfront)
{
  if (*pfront == -1)
  {
    printf("Queue is empty\n");
    return -1;
  }
  else
  {
    return 0;
  }
}

int dequeue(int *arr, int *pfront, int *prear)
{
  int data = arr[*pfront];
  printf("Dequeuing: %d\n", data);

  arr[*pfront] = 0;

  if (*pfront == *prear)
  {
    *pfront = *prear - 1;
  }
  else
  {
    (*pfront)++;
  }

  return data;
}

int main(void)
{
  //Declare queue
  int arr[MAX];
  int front = -1, rear = -1;

  //Enqueue
  enqueue(arr, 23, &front, &rear);
  enqueue(arr, 9, &front, &rear);
  enqueue(arr, 11, &front, &rear);
  enqueue(arr, -10, &front, &rear);
  enqueue(arr, 25, &front, &rear);
  enqueue(arr, 16, &front, &rear);
  enqueue(arr, 17, &front, &rear);
  enqueue(arr, 22, &front, &rear);
  enqueue(arr, 19, &front, &rear);
  enqueue(arr, 30, &front, &rear);

  //Test queue over MAX
  enqueue(arr, 32, &front, &rear);

  //Dequeue
  int i;

  for (int idx = 0; idx < MAX + 1; idx++)
  {
    if (!empty(&front))
    {
      i = dequeue(arr, &front, &rear);
      printf("Receieved dequeued item: %d\n", i);
    }
  }

  return 0;
}
