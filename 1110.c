
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, n2;
int circle_number = 0;
int sum;


int main() {
	
	scanf("%d", &n);

	if (0 <= n <= 99)
		if (n < 10)
			printf("%02d\n", n);
	while (n != 0) {
		sum += (n % 10);
		n = n / 10;
	}

	//모르겠다꾀고리





	

	//printf("%d", circle_number);

	return 0;
}