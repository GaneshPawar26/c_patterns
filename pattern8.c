#include<stdio.h>

void main()
{
	int l,c,s;
	
	for(l=0;l<=3;l++)
	{
		for(s=l;s<=2;s++)
		printf(" ");
		
		for(c=0;c<=l;c++)
		printf("* ");
		
		printf("\n");
	}
}
