//Circular Queue
//Change second
//Yet another change

#include<stdio.h>
#include<stdlib.h>
#define MX 15
void ins(int *,int *,int *);
void del(int *,int *,int *);
int main()
{
	int a[MX],f,r,i,n;
	printf("Enter no. of elements\n");
	scanf("%d",&n);
	r=n;
	if(n==0)
		f=0;
	else
		f=1;
	if(f!=0)
	{	
		printf("Enter elements\n");	
		for(i=f-1;i<=r-1;i++)
		{
		scanf("%d",&a[i]);
		}
	}
	printf("To insert,press 1\nTo delete,press 2\n");
	scanf("%d",&n);
	if(n==1)
	{
		ins(&f,&r,a);
	}
	else if(n==2)
	{
		del(&f,&r,a);
	}
	for(i=f-1;i<=r-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void ins(int *f,int *r,int *q)
{
	int n;
	if((*r==MX)&&(*f==0)||(*f==*r+1))
	{
		printf("Overflow\n");
		exit(1);
	}
	printf("Enter element\n");
	scanf("%d",&n);
	if((*f==0))
	{
		*r=1;
		*f=1;
	}
	else if((*r==MX))
	{
		*r=1;
	}
	else
	{
		*r=*r+1;
	}
	q[*r-1]=n;
}

void del(int *f,int *r,int *q)
{
	if((*f==0))
	{
		printf("Underflow\n");
		exit(2);
	}
	if((*r==*f))
	{
		*r=0;
		*f=0;
	}
	else if((*f==MX))
	{
		*f=1;
	}
	else
	{
		*f=*f+1;
	}
}








