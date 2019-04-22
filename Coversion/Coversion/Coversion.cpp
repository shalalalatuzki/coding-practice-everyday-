#include <iostream>
#include<queue>
#include <string>
using namespace std;

void Coversion(int n) {
	queue<string> bns;//存储二进制数
	bns.push("1");
	while (n--) {
		string str1 = bns.front();
		bns.pop();
		cout << str1 << endl;

		string str2 = str1;

		bns.push(str1.append("0"));
		bns.push(str2.append("1"));

	}
}

int main() {
	int n;
	cin >> n;
	Coversion(n);
	system("pause");
	return 0;
}

