//time limit exceeded
//#include <cstdio>  
//#include <cstdlib>
//#include<iostream>
//using namespace std;
//const int SZ = 1 << 20;  //提升IO buff 
//struct fastio {
//	char inbuf[SZ];
//	char outbuf[SZ];
//	fastio() {
//		setvbuf(stdin, inbuf, _IOFBF, SZ);
//		setvbuf(stdout, outbuf, _IOFBF, SZ);
//	}
//}io;
//
//#define N 10000001
//int points[N];
//
//int main()
//{
//	int n, m, i, x;
//	int a, b;
//	/*scanf("%d %d", &n, &m);*/
//	cin >> n >> m;
//	for (i = 0; i < N; i++)
//		points[i] = 0;
//
//	while (n--)
//	{
//		cin >> x;
//		points[x + 1] = 1;
//	}
//
//	for (i = 2; i <= N; ++i)
//		points[i] += points[i - 1];
//
//	while (m--)
//	{
//		//scanf("%d %d", &a, &b);
//		cin >> a >> b;
//		printf("%d\n", points[b + 1] - points[a]);
//	}
//	return 0;
//}

//#include <cstdio> 
//#include <cstdlib> 
//const int SZ = 1 << 20; 
//struct fastio { 
//	/*大io，加速输入和输出*/ 
//	char inbuf[SZ];
//	char outbuf[SZ]; 
//	fastio() {
//		setvbuf(stdin, inbuf, _IOFBF, SZ);
//		setvbuf(stdout, outbuf, _IOFBF, SZ);
//	}
//}io; 
//int tot;
///*输入序列中元素的总个数*/ 
//int points[500005]; 
///*查找最后一次出现e的位置, 若原序列中没有元素e，则返回在原序列中插入e后 e所在的位置*/ 
//inline int searchBack(const int e)
//{  int lo = 0, hi = tot;
//   int mi = 0; 
//   while (lo < hi)
//   { 
//	   mi = (lo + hi) >> 1;
//	   e < points[mi] ? hi = mi : lo = mi + 1; 
//   } 
//   return lo; 
//} /*查找第一次出现e的位置，若原序列中没有元素e，则返回在原序列中插入e后 e所在的位置*/ 
//inline int searchFront(const int e)
//{ 
//	int lo = 0, hi = tot, mi = 0; 
//	while (lo < hi) { mi = (lo + hi) >> 1;
//	e > points[mi] ? lo = mi + 1 : hi = mi; 
//	} 
//	return lo;
//} 
//inline int compare(const void *a, const void *b) 
//{ 
//	if (*(int *)a != *(int *)b) 
//		return (*(int *)a > *(int *)b); 
//	else return 0; 
//} 
//int main(void) 
//{ 
//	int m, n;
//	scanf("%d%d", &n, &m);
//	tot = n; 
//	for (int i = 0; i < n; i++)
//	{ 
//		scanf("%d", &points[i]); 
//	} 
//	qsort(points, tot, sizeof(int), &compare);
//	/*原序列可能是无序的，使用快速排序算法排序*/ 
//	int start, end; for (int i = 0; i < m; i++) 
//	{
//		scanf("%d%d", &start, &end); 
//		printf("%d\n", searchBack(end) - searchFront(start));
//	} 
//	return 0; 
//}
//
