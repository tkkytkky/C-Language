#include<stdio.h>
main()
{


	int ch,x;

	printf("�p����1����������͂��ĉ������B���s�L�[�œ��͂��I�����܂��B\n");
	while ((ch=getchar()) !='\n'){

		if(ch>='A' && ch<='Z')
			x='z'-ch+'A';
		else if (ch>='a' && ch<='z')
			x='Z'-ch+'a';

		putchar(x);
	}
	putchar('\n');

}