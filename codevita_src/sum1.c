#include<stdio.h>
int main()
{
	int a,sum=0,c;

	scanf("%d",&c);
	while(c)
	{
		scanf("\n%d",&a);
		sum=sum+a;
		c--;
	}
	printf("%d",sum);
	printf("\n");
	return 0;
}
