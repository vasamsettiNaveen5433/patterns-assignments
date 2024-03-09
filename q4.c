#include<stdio.h>
void main()
{
	int i,j,k,m,row;
	printf("Enter the rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
	   for(k=0,m=1;k<i;k++,m+=2)
		printf(" ");
	   for(j=0;j<row-i;j++)
	    {
                	
		 printf("%d",m);
		 m+=2;
		 
             }
		 printf("\n");
          }
}
        
