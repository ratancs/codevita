#include<stdio.h>
#include<stdlib.h>
int chkbook(char,int);
int main()
{
	char id[10];

gets(id);


int id2[10],i,k,j;
int chkques=0;
int sum=0;



for(i=0;i<10;i++)
{
	if(id[i]=='?')
	{
		for(j=0;j<10;j++)
			{	id[i]=(char)(j);
				for(k=0;k<10;k++)
					sum=sum+chkbook(id[k],10-k);
				if(sum%11==0)
					{printf("%d\n",j);exit(0);}


			}
		if(j==10)
	{	printf("NO SOLUTION POSSIBLE\n");exit(0);}
	}

	else
		sum=sum+chkbook(id[i],10-i);
}

if(sum%11==0)
	printf("VALID INPUT\n");
else
	printf("INVALID INPUT\n");


}

int chkbook(char a,int pos)
{
	int aval=a;
	if(aval>47&&aval<58)
		return (pos*(aval-48));
	else if(aval==88)
		if(pos!=1)
			{	printf("INVALID INPUT\n"); exit(0);}
		else
			{return (10);}

}


