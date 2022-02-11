#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
	Program Code Submitted by Susobhan Akhuli
*/

struct threeNum {
	int n1, n2, n3;
};

int main() {
	int n;
	struct threeNum num;
	FILE* fptr;

	if ((fptr = fopen("C:\\program.bin", "wb")) == NULL) {
		printf("Error! opening file");
		exit(1);
	}

	for (n = 1; n < 5; ++n)  {
		num.n1 = n;
		num.n2 = 5 * n;
		num.n3 = 5 * n + 1;
		fwrite(&num, sizeof(struct threeNum), 1, fptr);
	}

	fclose(fptr);

	_getch();
	return 0;
}