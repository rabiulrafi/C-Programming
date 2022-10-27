	#include<stdio.h>

	// Global variables
	int A;
	int B;

	int Add()
	{
		return A + B;
	}

	int main()
	{
		int answer; // Local variable
		A = 5;
		B = 7;
		answer = Add();
		printf("%d\n",answer);
		return 0;
	}
