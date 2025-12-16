#include<stdio.h>
int main()
{
	int n,i,rem,sum=0,x;
	printf("Enter a value of n: ");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(sum==x)
	{
		printf("It is an armstrong number");
	}
	else
	{
		printf("It is not an armstrong number");
	}
	return 0;
}
