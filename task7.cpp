#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "rus");
	int v1 = 50, v2 = 10;
	printf("%d\n%d\n", v1, v2);
	getch();
}
