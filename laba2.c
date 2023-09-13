#include <stdio.h>
#include <locale.h>


//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	int n, k,m;
//	n = 2;
//	k = 3;
//	m = 1;
//	printf("Сейчас %d часов %d минута %d секунда\n", n,k,m);
//	printf("Идет %d минута суток\n", k + n*60);
//	printf("До полуночи осталось %d часов и %d минут\n", 12-n,60-k);
//	printf("С 8.00 прошло %d секунд\n", n*3600 + k*60 + m);
//	printf("Текущий час  = %f суток  и текущая минута = %f часа\n", n/24., k/60.);
//}


int main()
{
	float n = 3, d;
	int L = 333;
	d = n / L;
	setlocale(LC_ALL, "RUS");
	printf("Дано:\n");
	printf("%.3f\n", n);
	printf("%.3d\n", L);
	printf("Ответ:\n");
	printf("%s\n", "_________");
	printf("%+08.3f\n", d);
	
}
