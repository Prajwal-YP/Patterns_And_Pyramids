#include<stdio.h>

void main()
{
	int i,j,n;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	printf("\n\n");
	
	for(i=1;i<=n;i++)
	{
		printf("\t\t\t");
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=i && j<=(2*n)-(i))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	for(i=1;i<=n;i++)
	{
		printf("\t\t\t");
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=n-(i-1) && j<=n+(i-1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
