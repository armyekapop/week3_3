#include<stdio.h>
int main()
{
	int input1, input2;
	scanf_s("%d%d", &input1, &input2);
	if (input1 < input2)
	{
		printf("%d less than %d", input1, input2);
	}
	if (input1 > input2)
	{
		printf("%d more than %d", input1, input2);
	}
	if(input1 == input2)
	{
		printf("%d = %d input1 = input2", input1, input2);
	}
	return 0;
}