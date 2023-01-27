#include <stdio.h>

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
