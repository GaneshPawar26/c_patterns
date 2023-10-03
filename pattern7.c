#include<stdio.h>


int main()
{
	char a[]={'a','b','c','d','e','f','g'};
	int l,c,s,s1=-2,l1=5;
	
	
	for(l=6;l>=0;l--)
	{
	
		for(c=0;c<=l;c++)
			printf("%c",a[c]);
			
		for(s=0;s<=s1;s++)
			printf(" ");
			
		s1+=2;
		
		
		if(l==6)
		{
			for(c=l1;c>=0;c--)
			printf("%c",a[c]);
		}
		else{
		
		for(c=l;c>=0;c--)
		{
			
			printf("%c",a[c]);
		}}
	
		
		
		printf("\n");
	}
	
	return 0;
	
}
