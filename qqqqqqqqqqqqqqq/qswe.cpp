#include<stdio.h>
int main() {
	float a, b;
	printf("Enter the width of the rectangle(CM) : ");
	scanf_s("%f", &a);
	printf("Enter the length of the rectangle(CM) : ");
	scanf_s("%f", &b);
	if (a < 0 || b < 0) {
		printf("ERROR");
	}
	else
		printf("The preceding place of this square is equal to %.2f cm^2", a * b);
}