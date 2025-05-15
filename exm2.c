#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "rus");
	int age = 0;
	printf("¬ведите ваш возраст\n");
	scanf("%d", &age);
	fflush(stdin);//чистка стандартного входного потока данных
	printf("¬веденный возраст: %d\n", age);
	
	double weight = 0.0;
	printf("¬ведите ваш вес\n");
	scanf("%lf", &weight);
	fflush(stdin);
	printf("¬веденный вес: %.1lf\n", weight);
	
	char sex = ' ';
	printf("¬ведите ваш пол (m - мужской, f - женский)\n");
	scanf("%c", &sex);
	printf("¬веденный пол: %c\n", sex);
	
	getch();
}
