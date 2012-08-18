//code vita, source code for finding simple interest 
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(int argc, char *argv[])
{
	float fnum,lnum;
	int digit,k,i,count=0,j,l;
	char a[50],ch;

for(k=1;k<4;k++)
{

	strcpy(a,argv[k]);
	ch=a[0];
	if(ch<48||ch>57)
			{	printf("Invalid Input\n");return 0;}

}


if(atof(argv[2])<=atof(argv[1])||atoi(argv[3])<0||atoi(argv[3])>9)
		{	printf("Invalid Input\n");
			return 0;
		}
	fnum=atof(argv[1]);
	lnum=atof(argv[2]);
	if((fnum<0||fnum>150000||lnum<0||lnum>150000))
		{	printf("Invalid Input\n");return 0;}
		
	digit=atoi(argv[3]);
for(i=fnum;i<=lnum;i++)
{	l=i;
	while(l>0)
	{
		j=l%10;
		if(j==digit)
			count++;
		l/=10;
	}
}

if(count)
printf("Count=%d",count);
else
printf("Invalid Input");

printf("\n");
return 0;

}
