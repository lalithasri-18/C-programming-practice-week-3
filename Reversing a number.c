#include<stdio.h>
int main()
{
	long long n;
	int i,rem;
	long long rev=0;
	printf("Enter a number: ");
	scanf("%lld",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=(rev)*10+rem;
		n=n/10;
	}
	printf("Reversed number = %lld",rev);
	return 0;
}
