#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "rus");
	int v1 = 5, v2 = 10, v3 =7;
	char s1='s', s2='m';
	printf("%d %d\n%d %c%c\n", v1, v2, v3, s1, s2);
	getch();
}
