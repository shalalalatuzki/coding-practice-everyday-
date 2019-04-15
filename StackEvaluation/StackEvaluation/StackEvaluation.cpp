#include<iostream>
#include<stack>
using namespace std;
int StackEvaluation(char *oper) {
	if (*oper=='\0') {
		return 0;
	}
	stack<int> numbers;
	//char *oper[i]=oper;
	for (int i = 0; oper[i];i++) {
		if (isdigit(oper[i]))
		{
			numbers.push(oper[i]-'0');
		}
		else
		{
			int num1 = numbers.top();
			numbers.pop();
			int num2 = numbers.top();
			numbers.pop();
			switch (oper[i])
			{
			case '+':numbers.push(num1 + num2);
				break;
			case '-':numbers.push(num2 - num1);
				break;
			case '*':numbers.push(num1*num2);
				break;
			case '/':numbers.push(num2 / num1);
			}
		}
	}
	return numbers.top();
}
int main() {
	char temp[]="";
	//char temp[] = "231*+9-";
	/*stack<int> keep;
	while (cin>>temp) {
		if (isdigit(*temp)) {
			keep.push(*temp);
		}
		else
		{
			int res=StackEvaluation(keep,temp);
			if (keep.empty()) {
				cout << res << endl;
			}
		}
		
	}*/
	cin >> temp;
	cout<<StackEvaluation(temp)<<endl;
	system("pause");
	return 0;
}
