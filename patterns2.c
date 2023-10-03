#include<stdio.h>

void main()
{
	int i,l,c,s,s1=-2,l1=5;
	char a[]={'a','b','c','d','e','f','g'};
//	
//	for(i=0;i<=4;i++)
//	printf("%c",a[i]);


	for(l=6;l>=0;l--)
	{
		for(c=0;c<=l;c++)
		{
			printf("%c",a[c]);
		}
		
		for(s=0;s<=s1;s++)
		printf("*");
		
		s1+=2;
		
		
		
		for(c=l1;c>=0;c--)
		{
			printf("%c",a[c]);
		}
		
		if(l!=6)
			l1--;
		
		printf("\n");
	}
}
