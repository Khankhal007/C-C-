#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,a,e,i,o,u;
	clrscr();
	printf("\n enter ch :");
	scanf("%c",&ch);

	if(ch== 'a'|| ch== 'e'|| ch== 'i'|| ch== 'o'|| ch== 'u'|| ch== 'A'|| ch== 'E'|| ch== 'I'|| ch== 'O'||ch== 'U')
	{
		printf("\n\t Alphabet is  vowel : %c",ch);
	}
	else
	{
		printf("\n\t  Alphabet is consoanant : %c",ch);
	}
	getch();
}
