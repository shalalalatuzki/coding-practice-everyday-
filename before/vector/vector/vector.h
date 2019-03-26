#pragma once
typedef int Rank;
#define DEFAULT_CAPACITY 3

template<typename T> class Vector {//����ģ����
protected:
	Rank _size; int _capacity; T* _elem;//��ģ��������������
	void copyFrom(T const*A,Rank lo,Rank hi);//����ָ�룬ָ��ָ��ĵ�ַ���䣬���ڵ�ַ��ֵ���Ա�
	void expand();//�ռ䲻��ʱ��չ
	void shrink();//װ�����ӹ�Сʱѹ��
	Rank bubble(Rank lo,Rank hi);//ɨ�轻��
	void bubbleSort(Rank lo,Rank hi);//��������
	Rank max(Rank lo,Rank hi);//ѡȡ���Ԫ��
	void selectionSort(Rank lo,Rank hi);//ѡȡ�����㷨
	void merge(Rank lo,Rank mi,Rank hi);//�鲢�㷨
	void mergeSort(Rank lo,Rank hi);//�鲢�����㷨
	Rank partition(Rank lo,Rank hi);//��㹹���㷨
	void quickSort(Rank lo,Rank hi);//���������㷨
	void heapSort(Rank lo,Rank hi);//�������㷨
public:
	//���캯��
	Vector(int c=DEFAULT_CAPACITY,int s=0,T v=0)//����Ϊc����ģΪs������Ԫ�س�ʼΪv
   {
		_elem = new T[_capacity = c]; 
		for ( _size = 0; _size < s; _elem[_size++] = v );
	} //s<=c
	//����Ϊc����ģΪs������Ԫ�س�ʼֵΪv
	Vector(T const* A, Rank n) { copyFrom(A, 0, n); }//�������帴��
	Vector(T const* A, Rank lo, Rank hi) { copyFrom(A, lo, hi); }//����
	Vector(Vector<T> const& V) { copyFrom(V._elem,0,V.size); }//�������帴��
	Vector(Vector<T> const& V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); }//����
	//��������
	~Vector() { delete[] _elem; }
	//ֻ�����ʽӿ�
	Rank size()const { return _size; }//��ģ
	bool empty ()const{ return !_size; }//�п�
	int disordered() const;//�ж������Ƿ�������
	Rank find(T const &e)const { return find(e, 0, _size); }//���������������
	Rank find(T const &e,Rank lo,Rank hi)const;//���������������
	Rank search(T const& e)const//���������������
	{return((0 >= _size) ? -1 : search(e, 0, _size))��}
	Rank search(T const& e, Rank lo, Rank hi)const;
	//��д�ӿڷ���
	T& operator[](Rank r)const;//�����±�������������������������ʽ���ø�Ԫ��
	Vector<T> &operator=(Vector<T> const&);//���ظ�ֵ�����Ա�ֱ�ӿ�¡����
	T remove(Rank r);//ɾ����Ϊr��Ԫ��
	int remove(Rank lo, Rank hi);
	Rank insert(T const& e) { return insert(_size, e); }
	/*Rank bubble(Rank lo, Rank hi);
	Rank bubbleSort(Rank lo, Rank hi);*/
	void sort(Rank lo,Rank hi);
	void sort() { sort(0, size); }//��������
	void unsort() { unsort(0, _size); }//����
	int deduplicate();//����ȥ��
	int uniquify();//����ȥ��
	//����
	void traverse(void(*)(T&));
	template<typename VST> void traverse(VST&);
};
#include"vector_implementation.h"