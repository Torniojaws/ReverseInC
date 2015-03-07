#include <stdio.h>

void reverse();
void arrayReverse();

int main() {
	printf("Enter sentence to reverse:");
	reverse();
	arrayReverse();
	return 0;
}

void reverse() {
	char c;
	scanf("%c", &c);
	if(c != '\n') {
		reverse();
		printf("%c", c);
	}
}

void arrayReverse() {
	int numerot[5] = {1, 2, 3, 4, 5};
	int i;
	int len = sizeof(numerot)/sizeof(numerot[0]);
	for(i=0; i<len/2; i++) {
		int tmp = numerot[i];
		numerot[i] = numerot[len - i - 1];
		numerot[len - i - 1] = tmp;
	}
	int j;
	for(j=0; j<len; j++) {
		printf("%i", numerot[j]);
	}
}