#include <stdio.h>

int main(void) {
	int x = 13;
	printf("Cislo %d je ", x);
	// rozhodneme, jestli je cislo sude/liche
	if (x % 2 == 0) {
		printf("sude\n");
	} else {
		printf("liche\n");
	}
}