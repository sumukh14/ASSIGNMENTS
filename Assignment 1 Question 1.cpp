#include<stdio.h>

void decimalTobinary (int n) {
	int binaryNum[32];
	int i = 0;
	
	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n/2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	   printf("%d", binaryNum[j]);
}

int main()    
{
	int n;
	printf("Enter a decimal number:");
	scanf("%d", &n);
	printf("Binary representation:");
	decimalTobinary(n);
	
	return 0;
}
