//find smallest and second smallest number in an array
#include<iostream>
using namespace std;
void Print2Smallest() {
	//�����������洢��С�����
	int arr[] = { 12,13,1,10,34,1 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int int_max=1000000000,first,second;
	//�߽��ж�
	if (size < 2) {
		cout << "invid input" << endl;
	}
	first = second = int_max;
	//����һ�Σ����ϸ�����С�����
	while (size--) {
		if (arr[size] < first) {
			second = first;
			first = arr[size];
		}
		else if(arr[size]<second&&arr[size]!=first)
		{
			second = arr[size];
		}
	}
	if (second==int_max)
	{
		cout << "there is no second smallest element!" << endl;
	}
	else {
		cout << "the smallest number is " << first << endl;
		cout << "the second smallest number is " << second << endl;
	}
}
int main() {
	//int arr[3], n;
	Print2Smallest();
	system("pause");
	return 0;
}