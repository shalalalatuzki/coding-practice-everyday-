#include <iostream>
using namespace std;
int S[10000001];

//实现二分查找
int findBigerA(int a,int A[],int lo,int hi){
    while(lo<hi){
         int mi=lo+hi>>1;
        (A[mi]<a)?lo=mi+1:hi=mi;
    }
    return lo;
}
int findSmallerB(int a,int A[],int lo,int hi){
    while(lo<hi){
        int mi=lo+hi>>1;
        (a<A[mi])?hi=mi:lo=mi+1;
    }
    return lo;
}
int main() {
	int size, queries;
	cin >> size >> queries;
	int a, b;

	for (int i = 0; i < size; i++) {
		cin >> S[i];
	}
   // mergeSort(S,0,size-1);
	for (int i = 0; i < queries; i++) {
		cin >> a >> b;
		if (a > b) return -1;
		
		// for (int i = 0; i < size; i++) {
		// 	if (S[i] <= b && S[i] >= a) count++;
		// }
        int count=findSmallerB(b,S,0,size)-findBigerA(a,S,0,size);
		cout << count << endl;
	}
	
	return 0;
}
// //实现归并算法
// void merge(int a[],int lo,int mi,int hi){
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
// //递归实现归并排序
// void mergeSort(int a[],int lo,int hi){
//     if(hi-lo<2) return ;
//     int mi=lo+hi>>1;
//     mergeSort(a,lo,mi);
//     mergeSort(a,mi,hi);
//     merge(a,lo,mi,hi);
// }
