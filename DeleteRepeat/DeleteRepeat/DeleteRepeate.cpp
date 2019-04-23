#include <iostream>
#include<list>
#include<unordered_map>
using namespace std;
void DeleteRepeat(list<int> inputNum){
	 unordered_map<int,int> single;
	 list<int>::iterator j;
	for (list<int>::iterator i=inputNum.begin(); i != inputNum.end();i++) {
		single[*i]++;
		if (single[*i] > 1) {
			list<int>::iterator temp=i;
			inputNum.erase(temp);
			i = j;
		}
		j = i;
	}
	for (list<int>::iterator i = inputNum.begin(); i != inputNum.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}

int main() {
	list<int> num;
	while (cin.peek()!='\n') {
		int temp;
		cin >> temp;
		num.push_back(temp);
	}
	DeleteRepeat(num);
	//system("pause");
	return 0;
}