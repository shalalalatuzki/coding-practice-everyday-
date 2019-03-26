#pragma once
typedef int Rank;
#define DEFAULT_CAPACITY 3

template<typename T> class Vector {//向量模板类
protected:
	Rank _size; int _capacity; T* _elem;//规模、容量、数据区
	void copyFrom(T const*A,Rank lo,Rank hi);//常量指针，指针指向的地址不变，所在地址的值可以变
	void expand();//空间不足时扩展
	void shrink();//装填因子过小时压缩
	Rank bubble(Rank lo,Rank hi);//扫描交换
	void bubbleSort(Rank lo,Rank hi);//起泡排序
	Rank max(Rank lo,Rank hi);//选取最大元素
	void selectionSort(Rank lo,Rank hi);//选取排序算法
	void merge(Rank lo,Rank mi,Rank hi);//归并算法
	void mergeSort(Rank lo,Rank hi);//归并排序算法
	Rank partition(Rank lo,Rank hi);//轴点构造算法
	void quickSort(Rank lo,Rank hi);//快速排序算法
	void heapSort(Rank lo,Rank hi);//堆排序算法
public:
	//构造函数
	Vector(int c=DEFAULT_CAPACITY,int s=0,T v=0)//容量为c、规模为s、所有元素初始为v
   {
		_elem = new T[_capacity = c]; 
		for ( _size = 0; _size < s; _elem[_size++] = v );
	} //s<=c
	//容量为c、规模为s、所有元素初始值为v
	Vector(T const* A, Rank n) { copyFrom(A, 0, n); }//数组整体复制
	Vector(T const* A, Rank lo, Rank hi) { copyFrom(A, lo, hi); }//区间
	Vector(Vector<T> const& V) { copyFrom(V._elem,0,V.size); }//向量整体复制
	Vector(Vector<T> const& V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); }//区间
	//析构函数
	~Vector() { delete[] _elem; }
	//只读访问接口
	Rank size()const { return _size; }//规模
	bool empty ()const{ return !_size; }//判空
	int disordered() const;//判断向量是否已排序
	Rank find(T const &e)const { return find(e, 0, _size); }//无序向量整体查找
	Rank find(T const &e,Rank lo,Rank hi)const;//无序向量区间查找
	Rank search(T const& e)const//有序向量整体查找
	{return((0 >= _size) ? -1 : search(e, 0, _size))；}
	Rank search(T const& e, Rank lo, Rank hi)const;
	//可写接口访问
	T& operator[](Rank r)const;//重载下标操作符，可以类似于数组的形式引用各元素
	Vector<T> &operator=(Vector<T> const&);//重载赋值符，以便直接克隆向量
	T remove(Rank r);//删除秩为r的元素
	int remove(Rank lo, Rank hi);
	Rank insert(T const& e) { return insert(_size, e); }
	/*Rank bubble(Rank lo, Rank hi);
	Rank bubbleSort(Rank lo, Rank hi);*/
	void sort(Rank lo,Rank hi);
	void sort() { sort(0, size); }//整体排序
	void unsort() { unsort(0, _size); }//置乱
	int deduplicate();//无序去重
	int uniquify();//有序去重
	//遍历
	void traverse(void(*)(T&));
	template<typename VST> void traverse(VST&);
};
#include"vector_implementation.h"