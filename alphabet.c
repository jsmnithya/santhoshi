#include<stdio.h>
void main()
{
	char alp;
	printf("enter the character");
	scanf("%c",&alp);
	if((alp>='a'&&alp<='z')||(alp>='A'&&alp<='Z'))
	{printf("it is a alphabet");
	}
	else
	{printf("it is not a alphabet");
	}
}
