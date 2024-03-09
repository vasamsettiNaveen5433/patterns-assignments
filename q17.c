#include<stdio.h>
void main()
{
	int i,j,k,m,n,row;
	printf("Enter the rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(j=0,m=0,n=1;j<=i;j++)
	{
	if(j%2!=0)
	 {
	   printf("%d",m=m+n);
	   n++;
	 }
	 else
	   printf("%d",m=m+2);
	   
	}
	printf("\n");
	}
}
