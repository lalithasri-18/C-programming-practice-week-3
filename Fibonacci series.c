#include<stdio.h>
int main()
{
	int n,i,f=0,s=1,t;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("fibonacci series: ");
	for(i=0;i<=n;i++)
	{
		printf("%d ",f);
		t=f+s;
		f=s;
		s=t;
	}
	return 0;
}
