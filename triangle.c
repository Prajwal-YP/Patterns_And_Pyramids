#include<stdio.h>

main()
{
	int n,i,j;
	
	printf("\nEnter a number : ");
	scanf("%d",&n);
	printf("\n----------------------------\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d\t",j+1);
		printf("\n\n");
	}
	printf("\n----------------------------\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d\t",i+1);
		printf("\n\n");
	}
	printf("\n----------------------------\n\n");
}
