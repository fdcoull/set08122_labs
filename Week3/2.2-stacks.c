#include <stdio.h>

#define MAX 10

//Declare structure stack
struct stack
{
  int array[MAX];
  int top;
};

//Declare initialise stack
void init_stack(struct stack *s)
{
  s->top = -1;
}

//Declare push to stack
void push(struct stack *s, int item)
{
  if (s->top == MAX - 1)
  {
    printf("Stack is full. Couldn't push '%d' onto stack\n", item);
    return;
  }
  s->top++;
  s->array[s->top] = item;
}

//Declare pop from stack
int *pop(struct stack *s)
{
  int *data;
  if (s->top == -1)
  {
    printf("Stack is empty\n");
    return NULL;
  }
  data = &s->array[s->top];
  s->top--;
  return data;
}

int main(void)
{
  struct stack s;

  //Initialise stack
  init_stack(&s);

  //Push contents to stack
  push(&s, 11);
  push(&s, 23);
  push(&s, 18);
  push(&s, 16);
  push(&s, 27);
  push(&s, 14);
  push(&s, 20);
  push(&s, 39);
  push(&s, 2);
  push(&s, 15);

  //Test pushing over max
  push(&s, 7);

  //Output for pop
  int *i = NULL;

  //Test popping contents
  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

  //Test popping with no contents
  i = pop(&s);
  if(i) { printf("Item popped: %d\n", *i); }

}
