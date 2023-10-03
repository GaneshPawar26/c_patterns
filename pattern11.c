#include<stdio.h>

void main()
{
	int l,c,s;
	
	for(l=1;l<=7;l++)
	{
		if(l==1 && l==7)
		{
			for(c=0;c<=4;c++)
			printf("* ");
		}
		else
		{
			if(l<=4)
			{
				for(s=0;s<=l;s++)
				{
					printf(" ");
				}
				for(c=l;c<=4;c++)
				{
					printf(" *");
				}
			}
			else{
				for(s=l;s<=8;s++)
				{
					printf(" ");
				}
				for(c=4;c<=l;c++)
				{
					printf(" *");
				}
			}
		}
		printf("\n");
	}
}
