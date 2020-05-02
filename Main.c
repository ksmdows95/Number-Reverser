#include <stdio.h>

int main()
{
	int num, rem = 0, div = 0, total = 0;
	printf("Enter a number:");
	scanf_s(" %d", &num);
	while (num > 0)
	{
		rem = num % 10;
		div = num / 10;
		total = total * 10 + rem;
		num = div;
	}
	printf("Reversed version of your number: %d\n", total);

}
