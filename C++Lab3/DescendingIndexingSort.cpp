#include "DescendingIndexingSort.h"
using namespace std;

void desIndSort(int arr[], int size)
{
	cout << "�������� ����� ������� ������ �� 1 �� 12: ";
	int leftIndexAsc;
	cin >> leftIndexAsc;
	while (leftIndexAsc < 1 || leftIndexAsc > 12)
	{
		cout << "������� ������������ �������� ��������� ��� ������ �������, ��������� ����: ";
		cin >> leftIndexAsc;
	}
	cout << "�������� ����� ������� ������ �� 2 �� 13: ";
	int rightIndexAsc;
	cin >> rightIndexAsc;
	while (leftIndexAsc >= rightIndexAsc || rightIndexAsc > 13)
	{
		cout << "������� ������������ �������� ��������� ��� ������� ���������, ��������� ����: ";
		cin >> rightIndexAsc;
	}
	rightIndexAsc -= 1;

	while (leftIndexAsc <= rightIndexAsc)
	{
		for (int i = rightIndexAsc; i >= leftIndexAsc; i--)
			if (arr[i - 1] < arr[i]) swap(arr[i - 1], arr[i]);
		leftIndexAsc++;


		for (int i = leftIndexAsc; i <= rightIndexAsc; i++)
			if (arr[i - 1] < arr[i]) swap(arr[i - 1], arr[i]);
		rightIndexAsc--;
	}
}
