#include <iostream>
#include<stack>
#include<vector>
using namespace std;
void ParenthesisMatching(vector<char> inputStr) {
	if (inputStr[0]==')'||inputStr[0]=='}'||inputStr[0]==']'||inputStr[0]=='\0') {
		cout << "��������Ч���ִ�������" << endl;
		return ;
	}
	//cout << inputStr[2] << endl;
	stack<char> left;
	for (int i = 0; i<inputStr.size();i++) {
		if (inputStr[i]=='('||inputStr[i]=='['||inputStr[i]=='{') {
			left.push(inputStr[i]);
			continue;
		}
		switch (inputStr[i])
		{
		case ')':
			if (left.top() == '(') {
				left.pop();
				break;
			}
			else {
				cout << "���Ų�ƥ��" << endl;
				return;
			}
		case '}':
			if (left.top() == '{') {
			left.pop();
			break;
		}
			 else {
			cout << "���Ų�ƥ��" << endl;
			return;
		}
		case ']':
			if (left.top() == '[') {
				left.pop();
				break;
			}
			else {
				cout << "���Ų�ƥ��" << endl;
				return;
			}
		}
	}
	if (left.empty()) cout << "����ƥ�䣡"<<endl;
	else  cout << "���Ų�ƥ�䣡" << endl;
}
int main() {
	vector<char> inputString;
	while (cin.peek()!='\n') {
		char temp;
		cin >> temp;
		inputString.push_back(temp);
	}
	ParenthesisMatching(inputString);
	system("pause");
	return 0;
}