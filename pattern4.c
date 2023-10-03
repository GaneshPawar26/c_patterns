#include<stdio.h>

int main()
{
	int l,s,c;
	
	for(l=1;l<=10;l++)
	{
		for(s=2;s<=l;s++)
		{
			printf(" ");
		}
		
		for(c=10;c>=l;c--)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	return 0;
}
