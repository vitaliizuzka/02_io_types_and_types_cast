#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "rus");
	int age = 0;
	printf("������� ��� �������\n");
	scanf("%d", &age);
	fflush(stdin);//������ ������������ �������� ������ ������
	printf("��������� �������: %d\n", age);
	
	double weight = 0.0;
	printf("������� ��� ���\n");
	scanf("%lf", &weight);
	fflush(stdin);
	printf("��������� ���: %.1lf\n", weight);
	
	char sex = ' ';
	printf("������� ��� ��� (m - �������, f - �������)\n");
	scanf("%c", &sex);
	printf("��������� ���: %c\n", sex);
	
	getch();
}
