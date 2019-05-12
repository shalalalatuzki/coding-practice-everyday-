#include<iostream>
using namespace std;
struct Node
{
	Node* left;
	Node* right;
	int data;
};
Node* newNode(int data) {
	Node* node = new Node();
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}
int maxHeight(Node* node) {
	if (node == NULL)	return 0;
	else {
		int leftHeight = maxHeight(node->left);
		int rightHeight = maxHeight(node->right);

		if (leftHeight>rightHeight) {
			return leftHeight + 1;
		}
		else{
			return rightHeight+1;
		}
	}
}
int main() {
	Node* node = newNode(1);

	node->left = newNode(2);
	node->right = newNode(3);
	node->left->left = newNode(4);
	node->left->right = newNode(5);

	cout << "max height of tree is " << maxHeight(node) << endl;

	system("pause");
	return 0;
}