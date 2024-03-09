#include<stdio.h>
void main()
{
	int i,j,k,m,n,row;
	printf("Enter the Row\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	for(k=0;k<row-i-1;k++)
	  {
          printf("   ");
	  }
	for(j=0,m=1;j<=i;j++,m++)
	  {
	  printf("%3d",m*m);
          
//	  printf(" ");
	  }
	
	  printf("\n");
	}
}
	  	
