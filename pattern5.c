#include<stdio.h>

void main()
{
	int l,s,c;
	for(l=1;l<=7;l++)
	{
		if(l<=4)
		{
		
			for(s=1;s<=l;s++)
			{
				printf(" ");
				
			}
			for(c=4;c>=l;c--)
			{
				printf("* ");
			}
		}
		else
		{
			for(s=7;s>=l;s--)
			{
				printf(" ");
			}
			for(c=4;c<=l;c++)
			printf("* ");
		}
		printf("\n");
		
			
		
		
		
	}
}
