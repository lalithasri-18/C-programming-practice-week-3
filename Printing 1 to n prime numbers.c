#include<stdio.h>
int main()
{
	int n,i,j,count;
	printf("Enter a number: ");
	if(scanf("%d",&n)!=1)
	{
		printf("Please enter a valid integer");
		return 0;
	}
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ",i);
		}
	}	
	return 0;
}
