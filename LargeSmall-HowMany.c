#include<stdio.h>
#define STRINGSIZE 256

main()
{


	char s[STRINGSIZE];
	int ch,cnt,lcnt,scnt,i;

	printf("文字列を入力して下さい\n");
	i=0;
	while ((ch=getchar()) !='\n'){
		s[i]=ch;
		i++;
	}
	cnt=0;
	lcnt=0;
	scnt=0;
	s[i]='\0';

	for (i=0;s[i] !='\0'; i++){
		cnt++;
		if(s[i]>='A' && s[i]<='Z')
			lcnt++;
		else if (s[i]>='a' && s[i]<='z')
			scnt++;
	}
	  
	printf("文字列全体の文字数: %d\n",cnt);
	printf("英大文字の文字数: %d\n",lcnt);
	printf("英小文字の文字数: %d\n",scnt);
}