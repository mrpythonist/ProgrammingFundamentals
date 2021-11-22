#include<stdio.h>
#include<conio.h>

int even();
int num();

int main() {
	int choice;
	printf("Enter 1 to display Even numbers from 5-n\n");
	printf("Enter 2 display smallest and largest number\n");
	printf("Enter choice: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 0: exit(0);
		case 1: printf("Total even numbers are: %d", even()); break;
		case 2: num(); break;
		default: 
		printf("Invalid Input!");
	}
	
	
}
int even()
{
	int n, i, sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=5;i<=n;i++)
	{
		if(i%2==0)
			sum++;
	}
	return sum;
}

int num()
{
	int n, largest=0, smallest=0;
	while(1)
	{
		printf("Enter a number: ");
		scanf("%d", &n);
		if(n==0)
			break;
		if(n>largest)
			largest = n;
		if(n<smallest)
			smallest = n;
	}
	printf("Largest is: %d\n", largest);
	printf("Smallest is: %d\n", smallest);
}
