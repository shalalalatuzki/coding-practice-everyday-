#include<iostream>
#include<stack>
using namespace std;
void SortByStack(stack<int> input) {
	if (input.empty()) { 
		cout << "请输入有效的数组" << endl;
		return; 
	}
	stack<int> sortStack;
	while (!input.empty()) {
		int temp = input.top();
		input.pop();
		while (!sortStack.empty()&&sortStack.top()<=temp){
			input.push(sortStack.top());
			sortStack.pop();
		}
		sortStack.push(temp);
	}
	while(!sortStack.empty()){
		cout << sortStack.top();
		sortStack.pop();
	}
}
int main() {
	stack<int> inputNumbers;
	while (cin.peek() != '\n') {
		int temp;
		cin >> temp;
		inputNumbers.push(temp);
	}
	SortByStack(inputNumbers);
	system("pause");
	return 0;
}