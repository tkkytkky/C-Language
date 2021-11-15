#include<stdio.h>
main()
{


	int ch,x;

	printf("‰p•¶Žš1•¶Žš‚ð“ü—Í‚µ‚Ä‰º‚³‚¢B\n");
	ch=getchar();

	if(ch>='A' && ch<='Z')
		x='a'+ch-'A';
	else if (ch>='a' && ch<='z')
		x='A'+ch-'a';

	putchar(x);
	putchar('\n');
 
 
}