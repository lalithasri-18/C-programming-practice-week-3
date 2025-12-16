#include<stdio.h>
int main()
{
	int n,i,sum=0,rem,x,fact;
	printf("Enter a number: ");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		for(fact=1,i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==x)
	{
		printf("It is a strong number");
	}
	else
	{
		printf("It is not a strong number");
	}
	return 0;
}
