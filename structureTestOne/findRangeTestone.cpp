#include <iostream>
using namespace std;
int S[10000001];

int main() {
	int size, queries;
	cin >> size >> queries;
	int a, b;

	for (int i = 0; i < size; i++) {
		cin >> S[i];
	}
	for (int i = 0; i < queries; i++) {
		cin >> a >> b;
		if (a > b) return -1;
		int count = 0;
		for (int i = 0; i < size; i++) {
			if (S[i] <= b && S[i] >= a) count++;
		}
		cout << count << endl;
	}
	
	return 0;
}
