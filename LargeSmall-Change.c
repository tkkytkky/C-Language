#include<stdio.h>
main()
{


	int ch,x;

	printf("英文字1文字を入力して下さい。\n");
	ch=getchar();

	if(ch>='A' && ch<='Z')
		x='a'+ch-'A';
	else if (ch>='a' && ch<='z')
		x='A'+ch-'a';

	putchar(x);
	putchar('\n');
 
 
}