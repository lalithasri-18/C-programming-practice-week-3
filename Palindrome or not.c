#include<stdio.h>
int main()
{
	long long n,x;
	int i,rem;
	long long rev=0;
	printf("Enter a number: ");
	scanf("%lld",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		rev=(rev)*10+rem;
		n=n/10;
	}
	if(rev==x)
	{
		printf("It is a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
	return 0;
}
