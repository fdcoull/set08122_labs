#include <stdio.h>

/*

Week 1 task: Solve problems from projecteuler.net

Problem 1

https://projecteuler.net/problem=1

*/

int main(int argc, char **argv) {
	int max = 1000;

	int value1 = 3;
	int value2 = 5;

	int i;

	for (i = 1; i < max; i++) {
		if (i % value1  == 0 || i % value2 == 0){
			printf("%d\n", i);
		}
	}


	return 0;
}
