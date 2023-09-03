#include <stdio.h>
#include <locale.h>

//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	int n;
//	float k, m;
//	n = 3.;
//	m = 333;
//	k = n / m;
//	printf("Дано:");
//	printf("%10d\n", n);
//	printf("%15d\n", 333);
//	printf("%15s\n","__________");
//	printf("Ответ:\n");
//	printf("%15f\n", k);
//	
//}

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, k,m;
	n = 2;
	k = 3;
	m = 1;
	printf("Сейчас %d часов %d минута %d секунда\n", n,k,m);
	printf("Идет %d минута суток\n", k + n*60);
	printf("До полуночи осталось %d часов и %d минут\n", 12-n,60-k);
	printf("С 8.00 прошло %d секунд\n", n*3600 + k*60 + m);
	printf("Текущий час  = %f суток  и текущая минута = %f часа\n", n/24., k/60.);
}