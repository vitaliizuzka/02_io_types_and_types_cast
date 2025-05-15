#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "rus");
	int v1 = 1, v2 = 13, v3 = 49;
	printf("%d %d %d\n", v1, v2, v3);
	getch();
}
