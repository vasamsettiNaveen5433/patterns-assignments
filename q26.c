#include<stdio.h>
void main()
{
	int i,j,k,l,m,row,n,x,z;
	printf("Enter no of rows\n");
	scanf("%d",&row);

	for(i=0,l=1;i<row;i++,l++)
	{
		for(k=0;k<row-i-1;k++)
		{
			printf("  ");
		}
		for(j=0,m=l;j<=i;j++)
		{
			printf("%2d",m++);
		}
		for(z=0,x=m-2;z<i;z++,x--)
			printf("%2d",x);
	
	printf("\n");
}
}

