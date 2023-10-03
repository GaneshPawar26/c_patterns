#include<stdio.h>

int main()
{
	int l,s,s1=-2;
	char c;
	char end='g';
	
	
	for(l=1;l<=7;l++)
	{
		for(c='a';c<=end;c++)
		{
			printf("%c",c);
		}
		for(s=0;s<=s1;s++)
		{
			printf(" ");
		}
		s1+=2;
		if(l==1)
		end--;
		
		for(c=end;c>='a';c--)
		{
			
			printf("%c",c);
		}
		if(l!=1)
		end--;
		printf("\n");
		
	}
	return 0;
}
