//#include<iostream>
//#include<set>
//using namespace std;
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//void push(Node **head,int data) {
//	Node* temp = new Node;
//
//	temp->data = data;
//
//	temp->next = *head;
//	*head = temp;
//}
//
//bool detectLoop(Node* h) {
//	set<Node* >s;
//	while (!h)
//	{
//		if (s.find(h)!=s.end()) {
//			return true;
//		}
//		s.insert(h);
//		h = h->next;
//	}
//	return false;
//}
//
//int main() {
//	Node* head = NULL;
//	push(&head,20);
//	push(&head,4);
//	push(&head,15);
//	push(&head,10);
//
//	head->next->next->next->next = head;
//
//	if (detectLoop(head))
//		cout << "Loop found";
//	else
//		cout << "No Loop";
//	system("pause");
//	return 0;
//}