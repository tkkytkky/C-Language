#include<stdio.h>
#define STRINGSIZE 256

main()
{
	char s[STRINGSIZE];
	int ch,i,at;

	printf("���[���A�h���X����͂��ĉ�����\n");
	i=0;
	while ((ch=getchar()) !='\n'){
		s[i]=ch;
		i++;
	}
	s[i]='\0';
	i=0;

	while (s[i]!='@')
		i++;
	at=i;
	printf("���[�J���p�[�g: ");
	for (i=0;s[i]!='@';i++)
		putchar(s[i]);
	putchar('\n');
	
	printf("�h���C���p�[�g: ");
	for (i=at+1;s[i]!='\0';i++)
		putchar(s[i]);
	
	putchar('\n');


}