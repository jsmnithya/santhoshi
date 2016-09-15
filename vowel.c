#include<stdio.h>
void main()
{
	int alp;
	printf("enter the alphabet\n");
	scanf("%c",&alp);
	if(alp=='a'||alp=='e'||alp=='i'||alp=='o'||alp=='u'||alp=='A'||alp=='E'||alp=='I'||alp=='O'||alp=='U')
	{printf("it is a vowel");
	}
	else
	{printf("it is not a vowel");
	}
}
