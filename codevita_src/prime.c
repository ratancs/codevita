//code vita, source code for finding prime number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int prime(float);
int main(int argc, char *argv[])
{
	int fnum,lnum;
	int digit,k,i,count=0,j,l;
	char a[50],ch;

for(k=1;k<4;k++)
{

	strcpy(a,argv[k]);
	ch=a[0];
	
		if(ch<49||ch>57)
			{	printf("Invalid Input\n");printf("\n");return 0;}
}


		if(argc!=4)
		{	printf("Invalid Input\n");printf("\n");
			return 0;
		}
else{
	fnum=atof(argv[1]);
	lnum=atof(argv[2]);
	digit=atoi(argv[3]);


for(i=fnum;i<=lnum;i++)
{
		
	if(prime(i))
		count++;
	if(count==digit)
		{printf("%d\n",i);printf("\n");exit(0);}

}

printf("No prime number is present ai this index\n");

if(count==0)
	{printf("No prime number is present ai this index\n");}

printf("\n");
return 0;

}
}

int prime(float num)
{
if(num==0||num==1)
return 0;
if(num==2)
return 1;
	int j=2,k;
 k=(num/2)+1;
for(j=2;j<=k;j++)
	if ((int)num%j==0)
		return 0;
return 1;
}





	

























