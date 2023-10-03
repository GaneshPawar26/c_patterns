#include<stdio.h>

void main()
{
	int l,c,s,s1=-2,l1=1;
	for(l=1;l<=4;l++)
	{
		for(c=4;c>=l;c--)
			printf("1");
			
		for(s=0;s<=s1;s++)
		printf("*");
		
		s1+=2;
		
		for(c=3;c>=l1;c--)
		printf("1");
		
		if(l!=1)
		{
			l1++;
		}
		printf("\n");
	
	}
		

	
}
