//time limit exceeded
//#include <cstdio>  
//#include <cstdlib>
//#include<iostream>
//using namespace std;
//const int SZ = 1 << 20;  //����IO buff 
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
//	/*��io��������������*/ 
//	char inbuf[SZ];
//	char outbuf[SZ]; 
//	fastio() {
//		setvbuf(stdin, inbuf, _IOFBF, SZ);
//		setvbuf(stdout, outbuf, _IOFBF, SZ);
//	}
//}io; 
//int tot;
///*����������Ԫ�ص��ܸ���*/ 
//int points[500005]; 
///*�������һ�γ���e��λ��, ��ԭ������û��Ԫ��e���򷵻���ԭ�����в���e�� e���ڵ�λ��*/ 
//inline int searchBack(const int e)
//{  int lo = 0, hi = tot;
//   int mi = 0; 
//   while (lo < hi)
//   { 
//	   mi = (lo + hi) >> 1;
//	   e < points[mi] ? hi = mi : lo = mi + 1; 
//   } 
//   return lo; 
//} /*���ҵ�һ�γ���e��λ�ã���ԭ������û��Ԫ��e���򷵻���ԭ�����в���e�� e���ڵ�λ��*/ 
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
//	/*ԭ���п���������ģ�ʹ�ÿ��������㷨����*/ 
//	int start, end; for (int i = 0; i < m; i++) 
//	{
//		scanf("%d%d", &start, &end); 
//		printf("%d\n", searchBack(end) - searchFront(start));
//	} 
//	return 0; 
//}
//
