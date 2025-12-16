#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter a number: ");
	if(scanf("%d",&n)!=1)
	{
		printf("Please enter a valid number\n");
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("It is a prime number");
	}
	else
	{
		printf("It is not a prime number");
	}
	return 0;
}
