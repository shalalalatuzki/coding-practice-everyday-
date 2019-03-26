//#include<string>
//#include<iostream>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	string sequence;
//	sequence.resize(10005);
//	string counter;
//	counter.resize(10005);
//	scanf("%s",&sequence[0]);
//	for (int i = 1; i < sequence.size();i++) {
//		if (sequence[i] == sequence[i - 1]) {
//			counter[i] = 1;
//			counter[i] += counter[i - 1];
//		}
//		else
//			counter[i] = 0;
//	}
//	int n;
//	scanf("%d",&n);
//	while (n--) {
//		int rank;
//		scanf("%d",&rank);
//		//const int temp=rank;
//		string bean;
//		//const char inserter=bean;
//		scanf("%s",&bean);
//		sequence.insert(rank,bean);
//		int low = rank - 1;
//		int hi = rank + 1;
//		if (sequence[rank] == sequence[low]) {
//			if (sequence[rank] == sequence[hi]) {
//				printf("-\n");
//				sequence.clear();
//				counter.clear();
//			}
//			else {
//				counter[rank] = 1;
//				counter[rank] += counter[low];
//				if (counter[rank] >= 3)
//				{
//					printf("-\n");
//					sequence.clear();
//					counter.clear();
//				}
//				else
//					printf("%s\n", sequence);
//			}
//		}
//		else if (sequence[rank] == sequence[hi])
//		{
//			int hier = rank + 2;
//			counter[rank] = 1;
//			counter[hi] += counter[rank];
//			if (counter[hier] == counter[rank]) {
//				printf("-\n");
//				sequence.clear();
//				counter.clear();
//			}
//			else {
//				printf("%s", sequence);
//			}
//		}
//		else
//			printf("%s\n", sequence);
//			//cout << sequence;
//	}
//	system("pause");
//	return 0;
//}
#include<string>
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
//加速输入流
const int SZ = 1 << 20;
struct  fastio
{
	char inbuf[SZ];
	char outbuf[SZ];
	fastio() {
		setvbuf(stdin,inbuf,_IOFBF,SZ);
		setvbuf(stdout,outbuf,_IOFBF,SZ);
	}
}io;
string s;
int position;
bool figure = false;

void  thrBeans(int po) {
	int first = po,second=po;
	int elem = s[po];
	while (s[first] == elem && first) first--;
	if (s[first] != elem) first++;
	while (s[second] == elem && second < s.size()) second++;
	if (second - first > 2) {
		s.erase(first,3);
		po = first;
		figure = true;
		thrBeans(po);
	}
}

int main() {
	getline(cin,s);
	//scanf("%s",&s);//这样输入会有访问冲突
	//s.resize(20001);
	//scanf("%s", &s[0]);
	//gets_s(s);
	//while (s[len] >'A'-1&&s[len] < 'Z'+1) len++;
	int n;
	scanf("%d",&n);
	while (n--) {
		char inster;
		scanf("%d %c",&position,&inster);
		s.insert(position,1,inster);
		//s[position] = inster;
		//s.resize(len++);
		thrBeans(position);
		if (figure) {
			printf("-\n");
			figure = false;
		}
		else
		{
			//cout << s << endl;
			puts(s.c_str());
		}
	}
	//system("pause");
	return 0;
	
}
