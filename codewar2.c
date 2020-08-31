#include  <stdio.h>
int prime(int b);
int main()
{
 int i,j,n,constant,a[25],c,sum=0,count=0,k=0;
 printf("Enter a number : ");
 scanf("%d",&n);
 for(i=2;i<=n;i++)
 {
 	constant=1;
 	for(j=2;j<=n/2;j++)
 	{
     	if(i%j==0)
     	constant=0;
 	}
 	if(constant==1)
 	{
    	a[k]=i;
    	k++;
    	}
 }
 for(i=0;i<k;i++)
 {
 	sum=sum+a[i];
	c= prime(sum);
	if(c==1)
	count++;
 }
 printf(" %d",count);
 return 0;
}

int prime(int b)
{
	int j,constant;
	constant=1;
 	for(j=2;j<=b/2;j++)
 	{
     	if(b%j==0)
     	constant=0;
 	}
 	if(constant==0)
 	return 1;
 	else
 	return 0;
}

