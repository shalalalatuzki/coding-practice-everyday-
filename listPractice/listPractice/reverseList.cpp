//#include<iostream>
//using namespace std;
//struct Node {
//	int data;
//	struct Node* next;
//	Node(int data) {
//		this->data = data;
//		next = NULL;
//	}
//};
//struct LinkedList {
//	Node* head;
//	LinkedList() {
//		head = NULL;
//	}
//	void reverse() {
//		Node* cur = head,*pre=NULL;
//		
//		while (cur) {
//
//			//change link
//			Node* temp = cur->next;
//			cur->next = pre;
//			//reset
//			pre = cur;
//			cur = temp;
//		}
//		head = pre;
//	}
//	//use recursion method
//	void reverseRecursion(Node* cur,Node* pre) {
//		if (!cur->next) {
//			head = cur;
//			cur->next = pre;
//			return;
//		}
//		Node* next = cur->next;
//		cur->next = pre;
//		reverseRecursion(next,cur);
//	}
//	void print() {
//		Node* temp = head;
//		while (temp) {
//			cout << temp->data<<" ";
//			temp = temp->next;
//		}
//	}
//	void push(int data) {
//		Node * temp = new Node(data);
//		temp->next = head;
//		head = temp;
//	}
//
//};
//int main() {
//	LinkedList ll;
//	ll.push(20);
//	ll.push(4);
//	ll.push(15);
//	ll.push(85);
//
//	cout << "Given linked list\n";
//	ll.print();
//	//ll.reverse();
//	ll.reverseRecursion(ll.head,NULL);
//
//	cout << "\nReversed Linked list \n";
//
//	ll.print();
//	system("pause");
//	return 0;
//}