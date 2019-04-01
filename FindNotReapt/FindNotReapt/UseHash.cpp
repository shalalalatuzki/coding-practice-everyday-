#include <iostream>
#include<unordered_map>
using namespace std;
int FindNotRepeat(int arr[],int n) {
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++) {
		mp[arr[i]]++;
	}
	for (int i = 0; i < n; i++) {
		if (mp[arr[i]] == 1)
			return  arr[i];
	}
	return -1;

}
int main() {
	int arr[100000] = {0};
	int element ;
	int len = 0;
	while (cin.peek() != '\n') {
		cin >> element;
		arr[len] = element;
		len++;
	}
	cout << FindNotRepeat(arr, len);
	system("pause");
	return 0;
}
