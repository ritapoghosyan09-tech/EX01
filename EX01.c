#include <stdio.h>
int main() {
	int a = 4;
	int b = 9;
	int temp;
	
	temp = a;
	a = b;
	b = temp;
	
	printf("a = %d,b = %d", a, b);

	int number;
	
	scanf("%d", &number);
	
	if (number % 2 == 0) {
		printf("Even");
	} else {
		printf("Odd");
	
	}
	
	int number3;
	scanf("%d", &number3);
	
	if(number3 % 3 == 0 && number3 % 5 ==0) {
		printf("Yes\n");
	} else {
		printf("No\n");
}
	int number4;
	
	
	scanf("%d" , &number4);
	printf("%d\n", number4 % 10);
	
	int number5;

	scanf("%d", &number5);

	int sum = number5 / 100 +(number5 / 10) % 10 + number5 % 10;
	
	printf("%d\n", sum);

	return 0;
}
