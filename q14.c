#include<stdio.h>
void main()
{
	int i,j,k,n,row;
	printf("Enter the rows\n");
	scanf("%d",&row);

	for(i=0,n=1;i<row;i++,n+=2)
	{
	for(j=0,k=n;j<i*2+1;j++,k--)
	{
	  printf("%d",k);
	}
	printf("\n");
	}
}

