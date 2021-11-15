#include<stdio.h>
main()
{


	int ch,x;

	printf("英文字1文字ずつを入力して下さい。改行キーで入力を終了します。\n");
	while ((ch=getchar()) !='\n'){

		if(ch>='A' && ch<='Z')
			x='z'-ch+'A';
		else if (ch>='a' && ch<='z')
			x='Z'-ch+'a';

		putchar(x);
	}
	putchar('\n');

}