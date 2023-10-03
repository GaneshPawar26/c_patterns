#include<stdio.h>

void main()
{
	
	int l,s;
	for(l=4;l>=1;l--)
	{
		for(s=l;s<=4;s++)
		{
			printf(" ");
		}
		printf("*");
		
	if(l>=2)
	{
		printf(" ");
		printf("*");
	}
	if(l>=3)
	{
		printf(" ");
		printf("*");
	}
	if(l>=4)
	{
		printf(" ");
		printf("*");
	}
	
	
		
		printf("\n");
		
	}
}
