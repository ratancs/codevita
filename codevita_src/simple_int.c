//code vita, source code for finding simple interest 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main(int argc, char *argv[])
{
	float si,p,r,t,cm,rate;
	float temp,m;
int k,l;
for(k=1;k<4;k++)
{
	char a[50],ch;

	strcpy(a,argv[k]);
l=strlen(a);
l=l-1;
while(l)
{
	ch=a[l];
if(ch<48||ch>57)
		
			{	printf("Invalid Input\n");return 0;}
l--;}
}

	if((atoi(argv[3])<=0)||atoi(argv[1])<0)
		{	printf("Invalid Input\n");
			return 0;
		}
else{
	p=atof(argv[1]);
	r=atof(argv[2]);
	t=atof(argv[3]);


	si=(p*r*t)/100.0;
	rate=r/100.0;
        m=1.0+rate;
	temp=pow(m,(int)t);
	cm=(p*temp)-p;

printf("Simple Interest:%.2f\n",si);
printf("Compound Interest:%.2f\n",cm);
printf("\n");



return 0;
}

}
	
