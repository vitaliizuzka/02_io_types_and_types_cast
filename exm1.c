#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "rus");
	int value1 = 7, value2 = 0;
	//%d - ������ ������ ��� ����� ����� � ���������� ���� �����
	printf("�������� value1 ����� %d!\n", value1);
	printf("%d - �������� value1!\n", value1);
	value2 = value1 / 3;// 7/3 -> 2 ����� ����� �� �������
	printf("value2 = %d!\n", value2);
	printf("value2 = %4d!\n", value2);
	printf("value2 = %-4d!\n", value2);
	printf("value2 = %.3d!\n", value2);
	
	double value3 = 7.986, value4 = 0.0;
	// %lf - ������ ������ ��� double ��������
	printf("value3 = %lf\n", value3);
	printf("value3 = %.2lf\n", value3);
	printf("value3 = %g\n", value3);
	
	value4 = value3 / 2.;
	printf("value4 = %.3lf\n", value4);
	
	//������� �������������� ����������� �����
	//�������� int ����� ���������� � double
	value3 = value2;// ������� �������������� 2 -> 2.0  (int -> double)
	printf("value3 = %.2lf\n", value3);
	// �������� double ����� ���������� � int, �� ��� �������
	//�������������� ����� ��������� ��� ������������ �����
	value2 = value4;//  3.993 -> 3   
	//� ��������� ������ ��� �������� �������������� �� double � int
	//� ���� ������ ��������� ����� �������������� �����
	//         value2 = (int)value4;
	printf("value2 = %d\n", value2);
	//������: ��� ������� ���� ����� ����� �������� ������������ ���-�
	value3 = 10 / value1;  //  10/7 -> 1    1 -> 1.0
	printf("value3 = %.2lf\n", value3);
	value3 = 10. / (double)value1;// (double)value1 ����� ���������� 
	printf("value3 = %.2lf\n", value3);
	
	char sym1 = 'f', sym2 = '+';
	// %c - ������ ������ ��������
	printf("������ ������: %c\n", sym1);
	sym2 = sym1 - 32;
	printf("������ ������: %c\n", sym2);
	
	printf("����������3: %.2lf, ����������1: %d, ������1: %c\n",
											value3, value1, sym1);
	
	getch();
}
