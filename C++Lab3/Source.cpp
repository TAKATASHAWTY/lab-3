#include "MiniMax.h"
#include "bubble.h"
#include "QuickSort.h"
#include "Show.h"
#include "CustomSort.h"
#include "AscendingIndexingSort.h"
#include "DescendingIndexingSort.h"
using namespace std;

void main(void)
{
	setlocale(0, "ru");
	int mas[] = { 2, 5, -8, 1, -4, 6, 3, -5, -9, 13, 0, 4, 9 };
	const int n = sizeof(mas) / sizeof(int);
	int mas2[n]{}, mas3[n]{}, mas4[n]{}, mas5[n]{}, mas6[n]{};

	for (int i = 0; i < n; i++)
	{
		mas2[i] = mas3[i] = mas4[i] = mas5[i] = mas6[i] = mas[i];
	}

	cout << "�� ��������������� ������:" << endl;
	show(mas, n);

	cout << "���������� ������� <<��������>>:" << endl;
	miniMax(mas, n);
	show(mas, n);

	cout << "���������� ������� <<��������>>:" << endl;
	bubble(mas2, n);
	show(mas2, n);

	cout << "���������� ������� <<������� ����������>>:" << endl;
	quickSort(mas3,n);
	show(mas3, n);

	cout << "���������� ������ ������ ������� �� ����������� � �������� �� ��������: " << endl;
	customeSort(mas4, n);
	show(mas4, n);

	cout << "���������� ������� �� ����������� � ��������� ���������: " << endl;
	AscIndSort(mas5, n);
	show(mas5, n);

	cout << "���������� ������� �� �������� � ��������� ���������: " << endl;
	desIndSort(mas6, n);
	show(mas6, n);
}
