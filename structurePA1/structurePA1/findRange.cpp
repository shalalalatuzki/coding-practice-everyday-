
#include <iostream>
#include<cstdio>
#include<cstdlib>
//#include<vector>
//#include <algorithm>
using namespace std;
//使用scanf和printf的提速
const int SZ = 1 << 20;
struct fastio {
	char inbuf[SZ];
	char outbuf[SZ];
	fastio(){
		setvbuf(stdin,inbuf,_IOFBF,SZ);
	    setvbuf(stdout,outbuf,_IOFBF,SZ);
	}
};

int S[500005];
////vector<int> S;
// //实现归并算法
// void mergeArray(int a[],int lo,int hi){
//	 int mi = lo + hi >> 1;
//     int edgb=mi-lo;
//     int* b=new int[edgb];
//     int edgc=hi-mi;
//     for(int i=0;i<edgb;i++) b[i]=a[lo+i];
//     for(int i=0,j=0,k=mi+i;j<edgb||k<edgc;){
//         //各自考虑越界问题，将越界哨兵看作无穷大
//         if(((b[j]<=a[k])||(edgc<=k))&&(j<edgb)) a[i++]=b[j++];
//         if(((a[k]<b[j])||(edgb<=j))&&(k<edgc)) a[i++]=a[k++];
//     }
//     delete [] b;
// }
// void mergeSort(int a[],int lo,int hi) {
//	 if (lo < hi) {
//		 int mi = lo + hi >> 1;
//		 mergeSort(a,lo,mi);
//		 mergeSort(a,mi+1,hi);
//		 mergeArray(a,lo,hi);
//	 }
// }


//实现二分查找
 int findBigerA(int a, int A[], int lo, int hi) {
	while (lo < hi) {
		int mi = lo + hi >> 1;
		(A[mi] < a) ? lo = mi + 1 : hi = mi;
	}
	return lo;
}

int findSmallerB(int a, int A[], int lo, int hi) {
	while (lo < hi) {
		int mi = lo + hi >> 1;
		(a < A[mi]) ? hi = mi : lo = mi + 1;
	}
	return lo;
}
//快排需要的函数
 int cmp(const void* a,const void *b) {
	if (*(int *)a!=*(int *)b) {
		return *(int *)a > *(int *)b;
	}
	else
		return 0;
}

int main() {
	int size, queries;
	/*std::ios::sync_with_stdio(false);
	cin >> size >> queries;*/
	scanf("%d%d",&size,&queries);
	int a, b;
	//int temp;
	for (int i = 0; i < size; i++) {
		/*cin>>S[i];*/
		scanf("%d",&S[i]);
	}
	//qsort(S,size,sizeof(int),cmp);
	qsort(S,size,sizeof(int),&cmp);
	/*for (int i = 0; i < size;i++) {
		cout << S[i] ;
	}
	cout << endl;*/
	for (int i = 0; i < queries; i++) {
		//cin >> a >> b;
		scanf("%d%d",&a,&b);
		//if (a > b) return -1;

		// for (int i = 0; i < size; i++) {
		// 	if (S[i] <= b && S[i] >= a) count++;
		// }
		//cout <<findSmallerB(b,S,0,size)-findBigerA(a,S,0,size)<< endl;
		printf("%d\n", findSmallerB(b, S, 0, size) - findBigerA(a, S, 0, size));
	}
	//system("pause");
	return 0;
}
