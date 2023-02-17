#include <time.h>
#include <stdio.h>

void code()
{
    for (int i = 0; i < 10000; i++)
    {
        printf(".");
    }
    printf("\n");
}

int main()
{
  clock_t t;
  int iterations;
  double times[3];
  double sum = 0;
  double average;
  char outputFileName[30];

  //Get user input of iterations
  printf("Input number of iterations:\n");
  scanf("%d", &iterations);

  //Run function in a loop until users iteration input is met
  int i;

  for (i = 0; i < iterations; i++)
  {
    printf("Start: %d \n", (int) (t = clock()));
    code();
    printf("Stop: %d \n", (int) (t = clock() - t));
    printf("Elapsed: %f seconds\n", (double) t / CLOCKS_PER_SEC);

    times[i] = (double) t / CLOCKS_PER_SEC;
    sum += times[i];
  }

  //Calculate average time for each try
  average = sum / iterations;

  //Get user input of file name
  printf("Input filename:\n");
  scanf("%s", &outputFileName);

  //Output times
  printf("Times:\n");

  FILE *textFile = fopen(outputFileName, "w");

  fprintf(textFile, "Times, ");

  for (i = 0; i < iterations; i++) {
    //Check if is final iteration, if so omit comma
    if (i != (iterations - 1))
    {
      printf("%f, ", times[i]);
      fprintf(textFile, "%f, ", times[i]);
    }
    else
    {
      printf("%f", times[i]);
      fprintf(textFile, "%f\n", times[i]);
    }
  }

  fprintf(textFile, "Average, ");

  fprintf(textFile, "%f", average);

  fclose(textFile);

  printf("\nAverage time: %f \n", average);

  return 0;
}
