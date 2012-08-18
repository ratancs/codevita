//add two numbers from command line argument .
#include<stdio.h>
#include<stdlib.h>
void main(int argc ,char *argv[])
{

	int count,num,sum=0,i=2;
		count=atoi(argv[1]);

	while(count)
	{
		num=atoi(argv[i]);
		sum=sum+num;
		i++;
		count--;
	}

	printf("%d\n",sum);
}

	
