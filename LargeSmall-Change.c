#include<stdio.h>
main()
{


	int ch,x;

	printf("�p����1��������͂��ĉ������B\n");
	ch=getchar();

	if(ch>='A' && ch<='Z')
		x='a'+ch-'A';
	else if (ch>='a' && ch<='z')
		x='A'+ch-'a';

	putchar(x);
	putchar('\n');
 
 
}