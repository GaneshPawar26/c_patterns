#include<stdio.h>


void main()
{
	int l,s;
	for(l=1;l<=4;l++)
	{
		for(s=3;s>=l;s--)
		printf(" ");
		printf("*");
//		printf("*");
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
