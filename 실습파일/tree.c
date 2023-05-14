#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int value;
	struct node * left;
	struct node * right;
}Node;

Node* root;

Node* connectChild(Node* parent, Node* left, Node* right) {
	if (parent == NULL) return NULL;

	parent->left = left;
	parent->right = right;
	return parent;
}
Node *createNode(int val) {
	// 1. sizeof(Node)malloc
	// 2. 초기화 p->value = val, p->left, p->right = NULL
	// 3. 만든 Node 객체(변수) 포인터 반환
	Node* pNode = (Node*)malloc(sizeof(Node));
	pNode->value = val;
	pNode->left = NULL;
	pNode->right = NULL;
	
	return pNode;
}

Node* makeTree()
{
	Node* a, * b, * c, * d, * e;

	a = createNode(100);
	b = createNode(200);
	c = createNode(300);
	d = createNode(400);
	e = createNode(500);
	
	connectChild(a, b, c);
	connectChild(b, NULL, NULL);
	connectChild(c, d, e);
	connectChild(d, NULL, NULL);
	connectChild(e, NULL, NULL);

	return a;
}

void preorder(Node *root)
{
	if (root != NULL) {
		printf("Node : %d\n", root->value);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(Node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("Node : %d\n", root->value);
		inorder(root->right);
	}
}
void postorder(Node* root)
{
	if (root != NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("Node : %d\n", root->value);
	}
}
Node* findNode(Node *root, int value) {
	if (root == NULL) {
		return NULL;
	}
	else {
		if (root->value == value) {
			return root;
		}
		else {
			findNode(root->left, value);
			findNode(root->right, value);
		}
	}
}
Node* insertLeftNode(Node* where, Node* new_node) {
	if (where != NULL) {
		new_node->left = where->left;
		where->left = new_node;
		return where;
	}
	else {
		return NULL;
	}
}
Node* insertRightNode(Node* where, Node* new_node) {
	if (where != NULL) {
		new_node->right = where->right;
		where->right = new_node;
		return where;
	}
	else {
		return NULL;
	}
}
