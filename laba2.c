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
//	printf("����:");
//	printf("%10d\n", n);
//	printf("%15d\n", 333);
//	printf("%15s\n","__________");
//	printf("�����:\n");
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
	printf("������ %d ����� %d ������ %d �������\n", n,k,m);
	printf("���� %d ������ �����\n", k + n*60);
	printf("�� �������� �������� %d ����� � %d �����\n", 12-n,60-k);
	printf("� 8.00 ������ %d ������\n", n*3600 + k*60 + m);
	printf("������� ���  = %f �����  � ������� ������ = %f ����\n", n/24., k/60.);
}