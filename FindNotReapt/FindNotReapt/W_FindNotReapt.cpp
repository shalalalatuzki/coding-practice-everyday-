////use lincked list find first one which not repeat in the array
//#include<list>
//#include<iostream>
//using namespace std;
//void FindFirstNotRepeat(list<int> MyList) {
//	if (MyList.size() < 2) {
//		cout << "you are just kidding me???" << endl;
//		return ;
//	}
//	for (list<int>::iterator i=MyList.begin(); i !=MyList.end();i++) {
//		int count = 0;
//		for (list<int>::iterator j =MyList.begin(); j != MyList.end();j++ ) {
//			if ((*j)==(*i)&& (i!=j)) {
//				count++;
//			}
//		}
//		 if(!count)
//		{
//			cout <<"the first not repeating number is "<< (*i) << endl;
//          return;
//		}
//		else  {
//			cout << "find a repeatting" << endl;
//		}
//	return;
//	}
//}
//int main() {
//	list<int> MyList;
//	int element;
//	while (cin.peek()!='\n') {
//		cin >> element;
//		MyList.push_back(element);
//		
//	}
//	FindFirstNotRepeat(MyList);
//	system("pause");
//	return 0;
//}
