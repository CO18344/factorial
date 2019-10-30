#include<stdio.h>

int main()
{
	int number;
	int i;
	int fact=1;

	printf("\nEnter number: ");     //Input number for factorial calculation
	scanf("%d",&number);

	for(i=2;i<=number;i++) 
	{
		fact = fact * i;
	}

	printf("Factorial is %d",fact);  // Dislay the computed factorial
  
  return 0;
}
