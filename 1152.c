/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char sentence[1001];
	scanf("%[^\n]", sentence);
	char* ptr = strtok(sentence, " ");
	int count = 0;

	while (ptr != NULL) {
		if (strcmp(ptr, " ") != 0)
			count++;
		ptr = strtok(NULL, " ");
	}
	printf("%d\n", count);

	return 0;
}
*/