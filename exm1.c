#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "rus");
	int value1 = 7, value2 = 0;
	//%d - формат вывода для целых чисел в десятичной сист счисл
	printf("Значение value1 равно %d!\n", value1);
	printf("%d - значение value1!\n", value1);
	value2 = value1 / 3;// 7/3 -> 2 целая часть от деления
	printf("value2 = %d!\n", value2);
	printf("value2 = %4d!\n", value2);
	printf("value2 = %-4d!\n", value2);
	printf("value2 = %.3d!\n", value2);
	
	double value3 = 7.986, value4 = 0.0;
	// %lf - формат вывода для double значений
	printf("value3 = %lf\n", value3);
	printf("value3 = %.2lf\n", value3);
	printf("value3 = %g\n", value3);
	
	value4 = value3 / 2.;
	printf("value4 = %.3lf\n", value4);
	
	//неявные преобразования примитивных типов
	//значения int можно записывать в double
	value3 = value2;// неявное преобразование 2 -> 2.0  (int -> double)
	printf("value3 = %.2lf\n", value3);
	// значения double можно записывать в int, но при неявном
	//преобразовании будет отброшена вся вещественная часть
	value2 = value4;//  3.993 -> 3   
	//в некоторых языках нет нефвного преобразования от double к int
	//в этом случае применяют явное преобразование типов
	//         value2 = (int)value4;
	printf("value2 = %d\n", value2);
	//задача: при делении двух целых чисел получить вещественный рез-т
	value3 = 10 / value1;  //  10/7 -> 1    1 -> 1.0
	printf("value3 = %.2lf\n", value3);
	value3 = 10. / (double)value1;// (double)value1 явное преобразов 
	printf("value3 = %.2lf\n", value3);
	
	char sym1 = 'f', sym2 = '+';
	// %c - формат вывода символов
	printf("Первый символ: %c\n", sym1);
	sym2 = sym1 - 32;
	printf("Второй символ: %c\n", sym2);
	
	printf("переменная3: %.2lf, переменная1: %d, символ1: %c\n",
											value3, value1, sym1);
	
	getch();
}
