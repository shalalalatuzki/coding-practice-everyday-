#include<iostream>
#include<vector>
using namespace std;
//merge two ordered array
void MergeTwoArray(const vector<int> & v1,const vector<int> & v2) {
	if (v1.empty()||v2.empty()) {
		cout << "请输入有效数组！！！"<<endl;
		return;
	}
	vector<int> v3;//keep ordered array
	int i = 0, j = 0;
	while (i<v1.size()&&j<v2.size()){
		if (v1[i]<v2[j]) {
			v3.push_back(v1[i]);
			i++;
		}
		else {
			v3.push_back(v2[j]);
			j++;
		}
	}
	while (i<v1.size()) {
		v3.push_back(v1[i]);
		i++;
	}
	while (j<v2.size()) {
		v3.push_back(v2[j]);
		j++;
	}
	for (int i = 0; i < v3.size();i++) {
		cout << v3[i] << ' ';
	}
	cout << endl;
}
int main() {
	cout<<"输入两个有序的数组，以enter键隔开\n";
	vector<int> vect1;
	vector<int> vect2;
	int temp;
	while (cin >> temp) {
		vect1.push_back(temp);
		if (cin.peek() == '\n')  break;
	}
	while (cin >> temp) {
		vect2.push_back(temp);
		if (cin.peek() == '\n')  break;
	}
	MergeTwoArray(vect1,vect2);
	system("pause");
	return 0;
}